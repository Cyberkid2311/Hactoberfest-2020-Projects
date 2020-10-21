def pad(inp, size):
    nos = size - len(inp) % size if len(inp)%size!=0 else size
    return bytes(inp) + (chr(nos)*nos).encode()

def depad(inp):
    return inp[:len(inp)-inp[len(inp)-1]] 

if __name__=="__main__":    
    n=int(input("1.Pad\n2.Depad\nChoice: "))
    if n==1:
        print(pad(input("Enter text to pad: ").encode(),16))
    if n==2:
        print(depad(input("Enter text to depad: ").encode()))
