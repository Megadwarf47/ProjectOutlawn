namespace fb {
    class ServerPlayerChangeChatChannelMessage : public Message {
    public:
        ServerPlayer* m_player;
        long long m_newMask;
    };
}

namespace fb {
    class ServerPlayerChangedSquadSpawnerStatusMessage : public Message {
    public:
        ServerPlayer* m_player;
    };
}

