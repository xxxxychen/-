def move(n,a,b,c):
    if n==1:
        print(a,"->",c)
    else:
        move(n-1,a,c,b)
        print(a,'->',c)
        move(n-1,b,a,c)
print("输入盘子数：")
n=int(input(""))
print("移动",n,"个盘子的步骤：")
move(n,'a','b','c')