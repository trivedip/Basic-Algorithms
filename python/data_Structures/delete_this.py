def squ():
    i=1;
    while True:
        yield i*i
        i+=1

print ([ [ [ []*2] for _ in range(3)] for _ in range(10) ])
