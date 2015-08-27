dir = $(shell cd  ../.. ;  pwd)
src_h = Base.h Cat.h Dog.h
src_cpp = Base.cpp Cat.cpp Dog.cpp
obj_o = Base.o Cat.o Dog.o 
cc = g++
main_c = main.cpp
main_o = main.o
main_bin = main
lib_mytest = libmytest.so

.PHONY: all
all: $(lib_mytest) $(main_bin)
	@echo current path : ${dir}
	@echo done
$(lib_mytest): $(obj_o)
	$(cc) -shared -fPIC  -o $(lib_mytest) $(obj_o)
	cp $(lib_mytest) $(dir)/lib	
$(obj_o): $(src_h) $(src_cpp)
	$(cc) -c -fPIC  $(src_cpp)
$(main_bin): 
	$(cc) -o $(main_bin) $(main_c) -L. -lmytest
	cp $(src_h) $(dir)/include
	cp $(main_bin) $(dir)/bin
.PHONY: clean
clean: 
	rm -rf *.o *.so $(main_bin) *~
	echo $(dir)
	rm -rf $(dir)/lib/$(lib_mytest)
	rm -rf $(dir)/bin/$(main_bin)
	cd $(dir)/include ;\
		rm -rf $(src_h)
