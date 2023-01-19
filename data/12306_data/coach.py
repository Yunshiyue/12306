import psycopg2

conn = psycopg2.connect(database='12306', user='postgres', password='991019', host='127.0.0.1', port='5433')
cursor = conn.cursor()

cursor.execute("select train_id, train_type from train order by train_id asc ")
rows = cursor.fetchall()
for row in rows:
    train_id = str(row[0])
    if row[1] == '动车':
        for i in range(1, 9):
            if i == 1:
                sql = "insert into coach values (%s, %s, %s)"
                cursor.execute(sql, (train_id, i, '商务'))
            elif i == 2 or i == 3:
                sql = "insert into coach values (%s, %s, %s)"
                cursor.execute(sql, (train_id, i, '一等'))
            elif i == 5:
                pass
            else:
                sql = "insert into coach values (%s, %s, %s)"
                cursor.execute(sql, (train_id, i, '二等'))
    elif row[1] == '高铁':
        for i in range(1, 17):
            if i == 1 or i == 9:
                sql = "insert into coach values (%s, %s, %s)"
                cursor.execute(sql, (train_id, i, '商务'))
            elif i == 2 or i == 3 or i == 10 or i == 11:
                sql = "insert into coach values (%s, %s, %s)"
                cursor.execute(sql, (train_id, i, '一等'))
            elif i == 5 or i == 13:
                pass
            else:
                sql = "insert into coach values (%s, %s, %s)"
                cursor.execute(sql, (train_id, i, '二等'))


conn.commit()
cursor.close()
conn.close()