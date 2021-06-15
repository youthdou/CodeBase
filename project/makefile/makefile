# [Makefile简易教程](https://zhuanlan.zhihu.com/p/359807792)

TARGET = app
CC = g++
SRC = $(shell find ./ -name "*.cpp")
OBJ = $(SRC:%.cpp=%.o)

$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ)


# %.o:%.c: 这是一个模式规则，表示所有的.o目标都依赖于与它同名的.cpp文件（当然还有deps中列出的头文件）。
# $<: 代表的是依赖关系表中的第一项（如果我们想引用的是整个关系表，那么就应该使用^），具体到我们这里就是%.cpp。
# $@: 代表的是当前语句的目标，即%.o。
%.o: %.cpp
	$(CC) -c $< -o $@


.PHONY: clean
clean:
	rm -rf $(OBJ) $(TARGET)