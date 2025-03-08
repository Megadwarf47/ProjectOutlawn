class ServerPlayerCreateMessage : public fb::Message {
    public:
        typedef void* (__thiscall* newInstance_t)(fb:: ServerPlayerCreateMessage* th);
        static newInstance_t newInstance;
    public:
        fb::ServerPlayer* m_player;
    };
