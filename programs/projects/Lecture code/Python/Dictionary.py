def Main():
    MyDictionary = {'ret': 'Thomas Re', 'smithb': 'Bill Smith'}
    print("Printing the entire dictionary without a loop")
    print(MyDictionary)
    
    #Adding items to a dictionary
    MyDictionary['JohnD']= 'John Doe'
    print("\n")
    print("Printing out the entire dictionary after adding John Doe ")
    print(MyDictionary)

    print("printing just the keys of the dictionary")
    for key in MyDictionary:
        print(key)
    print("\n")
    print("printing the new value key pairs of the dictionary")
    for key,value in MyDictionary.items():
        print(key)
        print(value)
    return
Main()