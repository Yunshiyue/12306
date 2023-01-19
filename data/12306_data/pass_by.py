import psycopg2
import xlrd

conn = psycopg2.connect(database='12306', user='postgres', password='991019', host='127.0.0.1', port='5433')
cursor = conn.cursor()

# cursor.execute(sql, ('station', 'city'))

data = xlrd.open_workbook("全国高速列车时刻表_20160310.xlsx")
table = data.sheet_by_index(3)

total_row = table.nrows
current_row = 1

current_train_id = ''
current_day = 0
last_time = '00:00'
flag = True

while current_row < total_row:
    row_value = table.row_values(current_row)
    if row_value[0] != '':
        if row_value[0] == current_train_id:
            current_row = current_row + 1
            flag = False
            continue
        else:
            current_train_id = row_value[0]
            current_day = 0
            last_time = '00:00'
            flag = True
    elif not flag:
        current_row = current_row + 1
        continue
    no = row_value[7]
    station = row_value[8]
    arrival_time = row_value[9]
    start_time = row_value[10]
    if no == 1:
        arrival_time = start_time
    if len(arrival_time) == 7:
        arrival_time = '0' + arrival_time
    if len(start_time) == 7:
        start_time = '0' + start_time
    if arrival_time < last_time:
        current_day = current_day + 1
    last_time = arrival_time
    # print(current_train_id + ' ' + station + ' ' + str(no) + ' ' + arrival_time + ' ' + start_time + ' ' + str(current_day))
    sql = "insert into pass_by values (%s, %s, %s, %s, %s, %s)"
    cursor.execute(sql, (current_train_id, station, no, arrival_time, start_time, current_day))
    current_row = current_row + 1

conn.commit()
cursor.close()
conn.close()