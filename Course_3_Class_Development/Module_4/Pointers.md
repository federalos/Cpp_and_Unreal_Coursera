# Pointers

## Raw C++ pointers

### nullptr - pointer to null address

### operation:
new *typename* var_name;
...
delete(var_name);

Memory leakage


### Dereference operator:  (*Var_Name).method() 
### Arrow notation: Ver_Name->method()

## Smart C++ Pointers
#### Unique pointers
```C++
std::unique_ptr<int> Score {nullptr};
```
Allocate memory
```C++
std::make_unique<int> Score;
```
Release memory: not necessary for Smart_pointers:
```C++
Score.reset();
```

#### Shared pointers
```C++
std::shared_ptr<int> score;
```
```C++
std::make_shared<int>()
```
#### Weak pointers


## Tasks:
- [Exercise. Don't Leave Me Dangling](/Course_3_Class_Development/Module_4/1_Dangling_pointer/Dangling_pointer.md) 
- [Exercise. It's Nice to Share](/Course_3_Class_Development/Module_4/2_Share/Share.md)
- [Exercise. The Loud Runaway](/Course_3_Class_Development/Module_4/3_The_Loud_Runway/The_Loud_Runway.md)