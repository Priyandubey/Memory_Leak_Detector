This is a c programs Memory Leak Detector,
implemented using C++ library injection

To run this project on your own Linux Systems :- 
`
g++ -shared -fPIC allocation_info.cpp leakfinder.cpp -o leakfinder.so -lpthread -ldl
`
then in same terminal
`
cc c_example.c -o c_example
`
Open another terminal and then set the LD_PRELOAD
`
export LD_PRELOAD=./leakfinder.so
`
 Lastly, run the c_example in the terminal where LD_PRELOAD was set
 `
 ./c_example
 `
 
