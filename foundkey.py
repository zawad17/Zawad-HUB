key_location ="chair"
location=['garage','living room','chair','dinning']
for i in location:
    i=input("enter location: ")
    if i==key_location:
        print("Found key",i)
        break
    else:
        print("key not found in",i)
