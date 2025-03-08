# How to do messages for [categories](https://github.com/Twig6943/ProjectOutlawn/blob/main/GhidraNotes/BreeMsgs/Categories.h)

1.Open up bf3 pdb in ghidra

2.Search for the message you want to do inside `Data Type Manager` (It'll always be inside `fb`)

3.Just put everything in the same spot

![image](https://github.com/user-attachments/assets/c56cfd5e-0d5b-4a69-84cf-071461ef13f8)

# An Example
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

The ServerPlayerDestroyMessage on the 1st and the 3rd line changes depending on the function.

The thing at the end (`fb::ServerPlayer* m_player`)



# So this is also valid
```
class ServerPlayerDestroyMessage : public fb::Message { 
    public:
        typedef void* (__thiscall* newInstance_t)(fb:: ServerPlayerDestroyMessage* th);
        static newInstance_t newInstance;
    public:
        fb::ServerPlayer* m_player;
    };
```
