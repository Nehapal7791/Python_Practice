class Stack:
    stack=[]
    pointer=0
    # def __init__(self):
    #     self.stack=[]
    #     self.pointer=0

    def push(self, element):
        self.stack.append(element)
        self.pointer += 1

    def peek(self):
        if self.pointer == 0:
            return None
        return self.stack[self.pointer - 1]

    def pop(self):
        if self.pointer == 0:
            return None
        value = self.stack[self.pointer-1]
        self.pointer -= 1
        return value

stack = Stack()
stack.push(2)
stack.push(3)

stack1=Stack()
stack1.push(4)
stack1.push(5) 

print(stack.peek())  
print(stack.pop())   
print(stack.peek()) 

print(stack1.peek())  
print(stack1.pop())   
print(stack1.peek()) 