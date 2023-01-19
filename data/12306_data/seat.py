import psycopg2
import datetime

conn = psycopg2.connect(database='12306', user='postgres', password='991019', host='127.0.0.1', port='5433')
cursor = conn.cursor()

# cursor.execute("select train_id, coach_id, seat_type, seat_count from coach natural join seat_count")
cursor.execute("select train_id, count(arrival_order) from pass_by group by train_id order by train_id")
rows = cursor.fetchall()
for row in rows:
    train_id = row[0]
    count = int(row[1])
    num = '1'*count
    cursor.execute("select coach_id, seat_type, seat_count from coach natural join seat_count where train_id = '" + train_id +"'")
    __ = cursor.fetchall()
    for result in __:
        coach_id = result[0]
        seat_type = result[1]
        seat_count = result[2]
        in_date = '2020-11-11'
        dt = datetime.datetime.strptime(in_date, "%Y-%m-%d")
        if seat_type == '商务':
            line = int(seat_count/3)
            for i in range(1, line+1):
                for day in range(0, 3):
                    out_date = (dt + datetime.timedelta(days=day)).strftime("%Y-%m-%d")
                    cursor.execute("insert into seat values (%s, %s, %s, %s, %s)", (train_id, coach_id, str(i) + 'A', out_date, num))
                    cursor.execute("insert into seat values (%s, %s, %s, %s, %s)", (train_id, coach_id, str(i) + 'C', out_date, num))
                    cursor.execute("insert into seat values (%s, %s, %s, %s, %s)", (train_id, coach_id, str(i) + 'F', out_date, num))
        elif seat_type == '一等':
            line = int(seat_count/4)
            for i in range(1, line+1):
                for day in range(0, 3):
                    out_date = (dt + datetime.timedelta(days=day)).strftime("%Y-%m-%d")
                    cursor.execute("insert into seat values (%s, %s, %s, %s, %s)", (train_id, coach_id, str(i) + 'A', out_date, num))
                    cursor.execute("insert into seat values (%s, %s, %s, %s, %s)", (train_id, coach_id, str(i) + 'C', out_date, num))
                    cursor.execute("insert into seat values (%s, %s, %s, %s, %s)", (train_id, coach_id, str(i) + 'D', out_date, num))
                    cursor.execute("insert into seat values (%s, %s, %s, %s, %s)", (train_id, coach_id, str(i) + 'F', out_date, num))
        elif seat_type == '二等':
            line = int(seat_count / 5)
            for i in range(1, line + 1):
                for day in range(0, 3):
                    out_date = (dt + datetime.timedelta(days=day)).strftime("%Y-%m-%d")
                    cursor.execute("insert into seat values (%s, %s, %s, %s, %s)",
                                   (train_id, coach_id, str(i) + 'A', out_date, num))
                    cursor.execute("insert into seat values (%s, %s, %s, %s, %s)",
                                   (train_id, coach_id, str(i) + 'B', out_date, num))
                    cursor.execute("insert into seat values (%s, %s, %s, %s, %s)",
                                   (train_id, coach_id, str(i) + 'C', out_date, num))
                    cursor.execute("insert into seat values (%s, %s, %s, %s, %s)",
                                   (train_id, coach_id, str(i) + 'D', out_date, num))
                    cursor.execute("insert into seat values (%s, %s, %s, %s, %s)",
                                   (train_id, coach_id, str(i) + 'F', out_date, num))
    print(train_id)

conn.commit()
cursor.close()
conn.close()

#确定座位数、类型
#确定有多少站