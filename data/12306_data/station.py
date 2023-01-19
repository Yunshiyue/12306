import psycopg2
import xlrd

conn = psycopg2.connect(database='12306', user='postgres', password='991019', host='127.0.0.1', port='5433')
cursor = conn.cursor()

# cursor.execute(sql, ('station', 'city'))

data = xlrd.open_workbook("全国高速列车时刻表_20160310.xlsx")
table = data.sheet_by_index(1)

for row_num in range(table.nrows):
    row_value = table.row_values(row_num)
    station = row_value[1]
    city = station
    if (station[-1] == '东' or station[-1] == '南' or station[-1] == '西' or station[-1] == '北') and len(station) > 2:
        city = station[:-1]
    sql = "insert into station values (%s, %s)"
    cursor.execute(sql, (station, city))

conn.commit()
cursor.close()
conn.close()