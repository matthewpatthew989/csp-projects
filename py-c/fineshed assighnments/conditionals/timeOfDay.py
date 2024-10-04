import datetime

now = datetime.datetime.now().hour
print(now)

if now <= 12:
    print("good morning!!!!!!!!!!!!!!!!")
elif now <= 18:
    print("afternoon *tips hat*")
elif now <= 20:
    print("good evening *yawns*")
else:
    print("go too bed kyle! *slams the door*")