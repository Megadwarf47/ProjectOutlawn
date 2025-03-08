# How to do messages for [categories](https://github.com/Twig6943/ProjectOutlawn/blob/main/GhidraNotes/BreeMsgs/Categories.h)

1.Open up bf3 pdb in ghidra

2.Search for the message you want to do inside `Data Type Manager` (It'll always be inside `fb`)

<img src="/GhidraNotes/Images/DataTypeManager.png">

(Side note always start at the bottom when creating stuff for a new category)

<img src="/GhidraNotes/Images/Structure2.png">

# Data generation example

```
class ServerPlayerDestroyMessage : public fb::Message {
    public:
        typedef void* (__thiscall* newInstance_t)(fb:: ServerPlayerDestroyMessage* th);
        static newInstance_t newInstance;
    public:
        fb::ServerPlayer* m_player;
    };
```

# The parts that change

### The class names on the 1st and the 3rd line changes depending on the class.

<img src="/GhidraNotes/Images/Classes.png" width="600"/>

### The category (`fb::ServerPlayer*`) and the structure name (`m_player`) also changes depending on the class

<img src="/GhidraNotes/Images/Category1.png" width="400"/>

# Here's a valid format that has stuff changed to give you an idea

```
class ServerPlayerCreateMessage : public fb::Message {
    public:
        typedef void* (__thiscall* newInstance_t)(fb:: ServerPlayerCreateMessage* th);
        static newInstance_t newInstance;
    public:
        fb::ServerPlayer* m_player;
    };
```
