import psycopg2
import xlrd
import datetime
from xlrd import xldate_as_tuple

conn = psycopg2.connect(database='12306', user='postgres', password='991019', host='127.0.0.1', port='5433')
cursor = conn.cursor()

# cursor.execute(sql, ('station', 'city'))

data = xlrd.open_workbook("全国高速列车时刻表_20160310.xlsx")
table = data.sheet_by_index(2)

for row_num in range(table.nrows):
    if row_num == 0:
        continue
    row_value = table.row_values(row_num)
    train_id = row_value[0]
    first_station = row_value[1]
    last_station = row_value[2]
    departure_time = row_value[3]
    arrival_time = row_value[4]
    train_type = row_value[5]
    sql = "insert into train values (%s, %s, %s, %s, %s, %s)"
    try:
        cursor.execute(sql, (train_id, first_station, last_station, departure_time, arrival_time, train_type))
        conn.commit()
    except psycopg2.errors.UniqueViolation:
        conn.rollback()
        print(train_id)

conn.commit()
cursor.close()
conn.close()

'''
以下车次重复
C1002
C2058
C2060
C2063
C2581
C2588
C2592
C2858
C2859
C2860
C2861
C2862
C2863
C2864
C2865
C2909/C2912
C2910/C2911
C2966
C2967
C2970
C2971
C6251
C6254
C6361
C6362
C6365
C6366
D11
D295/D298
D296
D3522
D5090
D5092
D6253
D6356
D7609
D7612
D7616
D7659
G33
G126
G131
G132
G139
G201
G202
G611
G618
G2331/G2334
G5371
G5372
G5373
G5374
G7575/G7578
G8034
G9408
'''