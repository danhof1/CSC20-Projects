#initialize the dictionary
MyDictionary={}

#Main Function used for input
def Dictionary(mydict):
    j= int(input("how many names?: "))
    for x in range(j):
        fName= str(input("what is your first name?: "))
        lName= str(input("what is your last name?: "))
        uName= lName+fName[0:1]
        pName= fName+" "+ lName
        mydict[uName]= pName
    return mydict

#Prints the value pairs of the Dictionary function
def prnt(mydict):
    for key,value in mydict.items():
        print(key)
        print(value)

#Sorts the keys alphabetically into an array   
def sort(mydict):
    
    #simpler version of sort method. Works if uncommented
    #for key in sorted(MyDictionary.keys()):
    #    print(str(a)+" "+key)
    #print("\n")
    
    #initialize array
    arr=[]
    
    #append keys to an array
    for keys in mydict.keys():
        arr.append(keys)
    
    #use bubble sort to sort array
    for j in range(len(arr)):
        for x in range(len(arr)-1):
            if arr[x]>arr[x+1]:
                arr[x],arr[x+1]=arr[x+1],arr[x]
    print(arr)




#Main Program
a= Dictionary(MyDictionary)
prnt(a)
sort(a)

