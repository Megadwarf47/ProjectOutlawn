# How to do messages for [categories](https://github.com/Twig6943/ProjectOutlawn/blob/main/GhidraNotes/BreeMsgs/Categories.h)

1.Open up bf3 pdb in ghidra

2.Search for the message you want to do inside `Data Type Manager` (It'll always be inside `fb`)

<img src="/GhidraNotes/Images/DataTypeManager.png">

<img src="/GhidraNotes/Images/Structure2.png">

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

# The parts that change

### The class name on the 2nd line changes.

<img src="/GhidraNotes/Images/Classes1.png" width="600"/>

### The category (`fb::ServerPlayer*`) and the structure name (`m_player`) also changes depending on the class

<img src="/GhidraNotes/Images/Category1.png" width="400"/>

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
