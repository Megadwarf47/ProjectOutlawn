![image](https://github.com/user-attachments/assets/4a03561b-34a5-45a6-9e4c-f26c304da143)# How to do messages for [categories](https://github.com/Twig6943/ProjectOutlawn/blob/main/GhidraStuff/BreeMsgs/Categories.h)

1.Open up bf3 pdb in ghidra

2.Search for the message you want to do inside `Data Type Manager` (It'll always be inside `fb`)

<img src="/GhidraStuff/TheNewStuff/Images/DataTypeManager.png">

<img src="/GhidraStuff/TheNewStuff/Images/Structure2.png">

(Remove the spaces ghidra makes on DataTypes on the header file but keep them on ghidra)

(Ghidra sometimes uses its own custom DataTypes such as `ulong64` just type in the thing you need to type from the bottom to the category file)

`ulong64` > `uint64_t` or `long long`

`undefined1` > `byte`

`undefined4` > `int`

`undefined8` > `uint64_t`

# Data generation example

```
namespace fb {
    class ServerPlayerCreateMessage : public Message {
    public:
        ServerPlayer* m_player;
    };
}
```

(Don't open the namespace like 1000 times just open it once on the beginning of the header file and then close it at the end.)

# The parts that change

### The class name on the 2nd line changes.

<img src="/GhidraStuff/TheNewStuff/Images/Classes1.png" width="600"/>

### The category (`fb::ServerPlayer*`) and the structure name (`m_player`) also changes depending on the class

<img src="/GhidraStuff/TheNewStuff/Images/Category1.png" width="400"/>

# Here's a valid format that has stuff changed to give you an idea

(Side note: There might be more than 1 DataType/Name if that's the case just add put a space and keep adding stuff)

```
namespace fb {
    class ServerPlayerChangeChatChannelMessage : public Message {
    public:
        ServerPlayer* m_player;
        uint64_t m_newMask;
    };
}
```

# Getting to the constructure

On bf3 pdb just do `G` to search 

<img src="/GhidraStuff/TheNewStuff/Images/bf3search.png" width="400"/>

On pvz go to `Window` > `Defined Strings`

<img src="/GhidraStuff/TheNewStuff/Images/pvzsearch.png" width="400"/>

On pvz somehow find the constructor

Example constructor

<img src="/GhidraStuff/TheNewStuff/Images/examplecontructor.png" width="400"/>

Rename it to `fb::string::string` like so

<img src="/GhidraStuff/TheNewStuff/Images/fb::string::string.png" width="400"/>

Now you gotta `Edit function signature`

<img src="/GhidraStuff/TheNewStuff/Images/edit_function_signature.jpg" width="400"/>

Change the calling convention to `__thiscall`

<img src="/GhidraStuff/TheNewStuff/Images/__thiscall.png" width="400"/>

Then remove the param_1

<img src="/GhidraStuff/TheNewStuff/Images/param1.png" width="400"/>


# Verifying the structure

You gotta compare the constructors's messages





