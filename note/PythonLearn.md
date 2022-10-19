# 队列

##queue

### 初始化

使用`queue`时首先要导入`queue`包，在使用`queue`下的`Queue`函数创建基础队列，除基础队列外，还可以创建先入后出队列，优先级队列
``` python
import queue

q = queue.Queue() # 括号内部定义最大长度
q = queue.LifoQueue() # 先入后出队列
q = queue.PriorityQueue # 优先级队列
```

### 方法

使用`put`入队，`get`出队并获取值，`empty`判空

``` python
n = 3
q.put(n)
r = q.get()
while q.empty(): # 队列空时为True
```



## deque

> 双端队列

### 初始化

双端队列位于`collections`包中，首先需要导入`collections`包，在使用包下的`deque`方法创建双端队列

``` python
import collections
q = collections.deque()
```

### 方法

与List类似，双端队列的入队使用`append`和`pop`，`append`默认添加元素到队列右端，使用`appendleft`可以在队列左端添加数据；`pop`默认弹出队列右端的元素，使用`popleft`可以弹出队列左端的元素

``` python
n = 3
q.append(n)
q.appendleft(n)
r = q.pop()
r = q.popleft()
```

#### 判空

deque中没有直接的判空方法，可以直接利用`len()`方法判断队列长度是否为零

# 空值

与其它语言的`NULL`不同，Python使用`None`代表空

``` python
while n != None:
```

