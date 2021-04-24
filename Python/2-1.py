for x in range(1,34):
    for y in range(1,51):
        for z in range(100):
            if 3*x+2*y==100-z/2:
                if x+y+z==100:
                    print("大马有",x,"，小马有",y,"，马驹有",z)