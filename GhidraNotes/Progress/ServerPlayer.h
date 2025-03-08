namespace fb {
    class ServerPlayerChangeChatChannelMessage : public Message {
    public:
        ServerPlayer* m_player;
        uint64_t m_newMask;
    };
}

namespace fb {
    class ServerPlayerChangedSquadSpawnerStatusMessage : public Message {
    public:
        ServerPlayer* m_player;
    };
}

namespace fb {
    class ServerPlayerChangedVoiceChannelMessage : public Message {
    public:
        ServerPlayer* m_player;
    };
}

namespace fb {
    class ServerPlayerCreateMessage : public Message {
    public:
        ServerPlayer* m_player;
    };
}

namespace fb {
    class ServerPlayerCreatedForConnectionMessage : public Message {
    public:
        ServerConnection * m_connection;
        ServerPlayer* m_player;
    };
}

namespace fb {
    class ServerPlayerDestroyMessage : public Message {
    public:
        ServerPlayer* m_player;
    };
}

namespace fb {
    class ServerPlayerEnterEntryMessage : public Message {
    public:
        ServerPlayer* m_player;
        ServerEntryComponent* m_newEntry;
        ServerEntryComponent* m_oldEntry;
        int m_playerSide;
        int m_playerId;
        bool m_hiddenObject;
    };
}

namespace fb {
    class ServerPlayerEnteredLevelMessage : public Message {
    public:
        ServerPlayer* m_player;
        bool* m_isLoadingSave;
    };
}

namespace fb {
    class ServerPlayerExitEntryMessage : public Message {
    public:
        ServerPlayer* m_player;
        ServerControllableEntity* m_controllable;
        ServerEntryComponent* m_entry;
    };
}

namespace fb {
    class ServerPlayerInstantSuicideMessage : public Message {
    public:
        ServerPlayer* m_player;
        ServerDamageGiverInfo* m_damageGiverInfo;
    };
}

namespace fb {
    class ServerPlayerKilledMessage : public Message {
    public:
        ServerPlayer* m_victim;
        ServerDamageGiverInfo* m_damageGiverInfo;
        ServerPlayer* m_inflictor;
        char* m_weaponName;
        Vec3 m_position;
        ServerEntryComponent* m_oldEntry;
        bool m_roadKill;
        bool m_headShot;
        bool m_victimInReviveState;
    };
}

namespace fb {
    class ServerPlayerKitReplacedMessage : public Message {
    public:
        ServerPlayer* m_player;
        ServerSoldierEntity* m_oldSoldier;
        ServerSoldierEntity* m_newSoldier;
    };
}

namespace fb {
    class ServerPlayerLeftLevelMessage : public Message {
    public:
        ServerPlayer* m_player;
    };
}

namespace fb {
    class ServerPlayerLevelLoadedMessage : public Message {
    public:
        ServerPlayer* m_player;
    };
}

namespace fb {
    class ServerPlayerManDownRevivedMessage : public Message {
    public:
        ServerPlayer* m_player;
        bool m_isAdrenalineRevive;
        ServerPlayer* m_reviver;
    };
}

namespace fb {
    class ServerPlayerManuallySelectedSpawnPointMessage : public Message {
    public:
        ServerPlayer* m_player;
    };
}

namespace fb {
    class ServerPlayerMeleeInteruptedMessage : public Message {
    public:
        ServerPlayer* m_killer;
        bool m_killedAttacker;
        ServerPlayer* m_meleeAttacker;
        ServerPlayer* m_meleeAttacker;
    };
}

namespace fb {
    class ServerPlayerNoInteractivityKickMessage : public Message {
    public:
        ServerPlayer* m_player;
    };
}

namespace fb {
    class ServerPlayerNoInteractivityKickMessage : public Message {
    public:
        ServerPlayer* m_player;
    };
}






