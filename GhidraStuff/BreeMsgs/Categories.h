///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

// "//" Means checked
// "//@" Means verified?

#pragma once

namespace fb {
	enum MessageCategory {
		AI = 0x59722D,
		AIClientBridge = 0x8615E9EB,
		AIDirector = 0x2F3E391D,
		BlazeCommon = 0x74A243B8,
		BlueprintBundle = 0x623AD17E,
		BreakableModelToComponents = 0xA1C2F8,
		BulletToCharacterComponents = 0x7F73FE1D,
		BundleManager = 0x1BB710E2,
		CharacterToComponents = 0x6982747B,
		Client = 0xA23A0E7C,
		ClientAI = 0x18F79514,
		ClientCamera = 0x56BA8785,
		ClientCameraToComponents = 0x12215402,
		ClientCharacter = 0xD265AF25,
		ClientCollision = 0xC76F63C2,
		ClientCommander = 0x80AC860C,
		ClientConnection = 0x8FD32FEA,
		ClientControllable = 0xAA595C9D,
		ClientControllableToComponents = 0x197C291A,
		ClientEntity = 0x3FBA50A7,
		ClientGameplay = 0x508F1EB6,
		ClientInput = 0xDAE0C08A,
		ClientInputSettings = 0xB29D2E0F,
		ClientLevel = 0xDAA58EAA,
		ClientMetrics = 0xD65BFE6B,
		ClientOS = 0x18F79440,
		ClientPersistence = 0x83E5DB8B,
		ClientPlayer = 0x24FE118F,
		ClientSoldier = 0x366FB6B6,
		ClientSoldierToComponents = 0xE83510B1,
		ClientSound = 0xDAAC4DDF,
		ClientSpawn = 0xDABDEC47,
		ClientState = 0xDABBBBAB,
		ClientVehicle = 0x22892FA4,
		ClientVehicleToComponents = 0x258E3AA3,
		ClientWeapon = 0x2862813E,
		Commander = 0x66151B95,
		CommanderActions = 0xA07A4A78,
		CommanderNetwork = 0x50C5A3EB,
		ComponentMods = 0xB6FE919F,
		ComponentModsToComponents = 0xF8F90C18,
		Coop = 0x7C813C36,
		Core = 0x7C813E9E,
		Debug = 0xC7175F4,
		ESportsMatchManager = 0x225D8D59,
		Emblem = 0x8BB46EEB,
		EntityToComponents = 0x7B911719,
		EntryComponent = 0x487427E,
		EventSync = 0xF65C75AE,
		FieldUpgrades = 0x98F4324,
		GameControl = 0x52A4FE8C,
		GlobalEventEntity = 0x36446C19,
		Input = 0xCC95993,
		InputMessages = 0x39ECCC2B,
		Juice = 0xD2CCEF5,
		LevelConsole = 0xB74C3F84,
		LoadGame = 0x832EE7AD,
		MemoryCard = 0x4DF6DB30,
		Movie = 0xC84D03D,
		Network = 0xC67D277B,
		NetworkAI = 0x5A64E993,
		NetworkCamera = 0x767B8242,
		NetworkGameAdministration = 0xF48E1CFB,
		NetworkGameplay = 0xA250CD31,
		NetworkLogic = 0x6FB72295,
		Nui = 0xB87DA97,
		Origin = 0xABFD7E11,
		PVZBattlepackSystem = 0xA0A27FAF,
		PVZCommander = 0x65DC9569,
		PVZCommanderActions = 0xA44DB5C4,
		PVZCommanderNetwork = 0xDA110457,
		PVZGameplay = 0xDD0003B3,
		PVZHealthModuleToComponents = 0xA12173B8,
		PVZNetwork = 0xAF114247,
		PVZPeerServerBackend = 0x6BB7481A,
		PVZPresence = 0x6FB5ACE0,
		PVZTelemetry = 0x30290FF6,
		PVZUI = 0xDC15605,
		PeerServerBackend = 0x6FF1CFA6,
		Performance = 0x697443DD,
		PhysicsComponent = 0x8524EA81,
		PlayerFriendManager = 0x8EBDEC97,
		PlaygroundServerBackend = 0x835BCC45,
		Presence = 0x9C775C5C,
		ProfileOptions = 0x43FBA85E,
		PunkBuster = 0x18959C2,
		PushNotification = 0x8A9AB276,
		SaveGame = 0x39AD472A,
		Server = 0xC6E40BA0,
		ServerAI = 0x10157C48,
		ServerAdmin = 0xD82CF64F,
		ServerAdministration = 0xF9C35B8E,
		ServerBackend = 0x432F8824,
		ServerBanList = 0x43FA92CF,
		ServerBuff = 0x6B65F117,
		ServerCharacter = 0x1286CF79,
		ServerClub = 0x6B6551D8,
		ServerCollision = 0xDB60E01E,
		ServerComponent = 0x9E26A3CF,
		ServerConnection = 0xEA20D836,
		ServerControllable = 0x1F5984C1,
		ServerControllableToComponents = 0xC43DEE46,
		ServerEntity = 0xE70AD9FB,
		ServerExplosion = 0xC09232B5,
		ServerGameAdministration = 0xB69BC820,
		ServerGameManager = 0x7A2B9FD,
		ServerGameMode = 0x5083020D,
		ServerGameplay = 0x50A2F3EA,
		ServerHitReactionToComponents = 0x52CAA83B,
		ServerInput = 0xD8B89DD6,
		ServerLevel = 0xD88635F6,
		ServerLevolution = 0xF53E2A75,
		ServerMapSequencer = 0x8B014E31,
		ServerMetrics = 0x12068DB7,
		ServerMission = 0x83527CC,
		ServerPeer = 0x6B6B3A22,
		ServerPlayer = 0xF3C93DD3,
		ServerProjectile = 0x4735C0D5,
		ServerReservedSlotsList = 0x26E0C51,
		ServerRound = 0xD93DD7C2,
		ServerScript = 0xFE14B1EF,
		ServerSimpleMelee = 0x243D018A,
		ServerSoldier = 0xDC84F4EA,
		ServerSoldierSuppression = 0x599254B3,
		ServerSound = 0xD92DCF03,
		ServerStaticModel = 0xE3C41B37,
		ServerSubLevel = 0xC306E952,
		ServerUnlockList = 0xDBEE5F92,
		ServerUnlockSystem = 0x5DA10995,
		ServerVehicle = 0x3E46CDF8,
		ServerWeapon = 0x7038862,
		Session = 0xA378479B,
		SoldierToComponents = 0x2E844B68,
		SpikeInternal = 0x39D77A26,
		Stat = 0x7C89B9B7,
		Statistics = 0xCD36FDE0,
		StreamInstall = 0xF1C83F58,
		SubLevel = 0x67772B37,
		SyncedSequence = 0xEF699C5C,
		TabletCommander = 0x3F1B78DF,
		UI = 0x5973B9,
		UIBundle = 0x90CCB0CD,
		UIComponent = 0xBA05F436,
		UINetwork = 0x89062F07,
		UnlockComponent = 0x6FD9357A,
		VehicleToComponents = 0xA2CD33FA,
		VeniceClientMetrics = 0xEBC23F79,
		VeniceClientMetricsListener = 0x993A42A7,
		VeniceCommonMetrics = 0x14865E4D,
		VeniceNetwork = 0x802AE469,
		VeniceServerMetrics = 0x426030A5,
		Voice = 0xD7638B3,
		Voip = 0x7C877605,
	};

	enum MessageType {
		// Category: AI
		AIDifficultyModifierMessage = 0xDF4C6D62,
		AIPlayerEnableAsTargetMessage = 0x63C0F317,
		AISpawnBotMessage = 0x94A37FC4,

		// Category: AIClientBridge
		AIClientBridgeDynamicModelEntityOnSpawnMessage = 0xE218121B,
		AIClientBridgeDynamicModelEntityOnUnspawnMessage = 0x988D6EA0,

		// Category: AIDirector
		AIDirectorStateMessage = 0xE74AD5C1,

		// Category: BlazeCommon
		BlazeCommonBattlepackRequestMessageBase = 0xD35B9704,
		BlazeCommonBattlepackResponseMessageBase = 0x5C42CB16,

		// Category: BlueprintBundle
		BlueprintBundleStreamedInMessage = 0x79C25CF,

		// Category: BreakableModelToComponents
		BreakableModelToComponentsCollapseMessage = 0x95EB44F8,
		BreakableModelToComponentsSpawnPartObjectsOnCollapseMessage = 0x15D9CBF3,

		// Category: BulletToCharacterComponents
		BulletToCharacterComponentsHitMessage = 0xE923C4A3,

		// Category: BundleManager
		BundleManagerBundleUnloadMessage = 0x70FEF1E0,

		// Category: CharacterToComponents
		CharacterToComponentsOnKilledMessage = 0xF1440AD2,
		CharacterToComponentsOnTeleportedMessage = 0xC6914C11,
		CharacterToComponentsSpawnTemplateMessage = 0xB03C991B,

		// Category: Client
		ClientAbortCutsceneMessage = 0x327C7921,
		ClientConnectedMessage = 0x9AA72C48,
		ClientContinueSingleplayerMessage = 0x43777FDF,
		ClientDisconnectedMessage = 0xBD4B8796,
		ClientEnterHudIngameMessage = 0xF944D18F,
		ClientEnteredIngameMessage = 0xD12A7757,
		ClientExitGameMessage = 0xBB209F59,
		ClientExitToMenuMessage = 0x7EF51B9F,
		ClientHostMigrationMessage = 0x36A95B,
		ClientJoinMultiplayerMessageBase = 0x4551EDBA,
		ClientJoinServerJobMessage = 0xE4F8CFF7,
		ClientLeftRemoteServerMessage = 0x518BF48D,
		ClientLevelLoadProgressMessage = 0x81B1565A,
		ClientLevelLoadedMessage = 0xDE75B306,
		ClientLevelUnloadedMessage = 0xADFF435D,
		ClientLoadLevelMessage = 0xB605BF07,
		ClientLoadLevelRequestedMessage = 0x7E241A57,
		ClientPeerNetworkRemovedMessageBase = 0x69286EBC,
		ClientRestartSingleplayerMessageBase = 0xE2321D7C,
		ClientReturnToMenuMessage = 0x6F8B48D5,
		ClientRoundOverMessage = 0x29E98B1B,
		ClientSetServerPasswordMessage = 0xF05426F,
		ClientStartMultiplayerMessage = 0xBF585A6D,
		ClientStartSingleplayerMessageBase = 0x107569EB,
		ClientStartedMessage = 0x1E86C1D6,
		ClientWantFullscreenMessage = 0x64E4E684,

		// Category: ClientAI
		ClientAIAnimAimingMessage = 0x315687B1,
		ClientAIAnimMovementStoppedMessage = 0x613EAFFE,

		// Category: ClientCamera
		ClientCameraShowKillerMessage = 0x5255A818,

		// Category: ClientCameraToComponents
		ClientCameraToComponentsInitMessage = 0x42C102D3,

		// Category: ClientCharacter
		ClientCharacterLocalPlayerDeletedMessage = 0xA580CA0D,
		ClientCharacterLocalPlayerSetMessage = 0x953B8F2,
		ClientCharacterSpawnDoneMessage = 0xDC18F1F5,

		// Category: ClientCollision
		ClientCollisionExplosionPackDetonatedMessage = 0xBB0A71A5,
		ClientCollisionExplosionPackPlacedMessage = 0xCB47C67A,
		ClientCollisionGrenadeCollisionMessage = 0x37FB0709,
		ClientCollisionProjectileImpactMessage = 0xCF6CB59E,
		ClientCollisionSpawnExplosionMessage = 0x6D358927,

		// Category: ClientCommander
		ClientCommanderPlayerChangedMessage = 0xBCFBD5B6,

		// Category: ClientConnection
		ClientConnectionInitializedMessage = 0x8896ECAD,
		ClientConnectionLinkLevelMessage = 0xD54F3F37,
		ClientConnectionLoadLevelMessage = 0xC8835E11,
		ClientConnectionUnloadLevelMessage = 0x6BF7F5AA,

		// Category: ClientControllable
		ClientControllableSpawnDoneMessage = 0x2C07630D,
		ClientControllableUnspawnDoneMessage = 0x835ABC76,

		// Category: ClientControllableToComponents
		ClientControllableToComponentsPlayerEnteredMessage = 0x67BAF3AB,
		ClientControllableToComponentsPlayerExitMessage = 0x6D391702,

		// Category: ClientEntity
		ClientEntityDummyToGetTheClientEntityMessageCategoryMessage = 0x3E2D2C69,

		// Category: ClientGameplay
		ClientGameplayControllableLowHealthMessage = 0x125FAED4,
		ClientGameplayPlayerBaseDestroyedMessage = 0x31401D78,
		ClientGameplayRoundEndedMessage = 0x8D7E1F11,
		ClientGameplayRoundStartedMessage = 0x5C4C787E,
		ClientGameplaySoldierHitMessage = 0x1A1457C2,

		// Category: ClientInput
		ClientInputUnchangedInputMessage = 0xD63D52AE,

		// Category: ClientInputSettings
		ClientInputSettingsRefreshMessage = 0x7ECE4D59,

		// Category: ClientLevel
		ClientLevelFinalizedMessage = 0x6A31005F,
		ClientLevelSpawnDebugEntitiesMessage = 0x291CC16,
		ClientLevelSpawnEntitiesEndMessage = 0x17F9BDE8,

		// Category: ClientMetrics
		ClientMetricsPauseGameMessage = 0x3E6AB63C,
		ClientMetricsPopUIScreenMessage = 0xE26BA0DF,
		ClientMetricsPushUIScreenMessage = 0xEF0BEE2E,
		ClientMetricsUIActionMessage = 0x11B4E622,

		// Category: ClientOS
		ClientOSFetchUserInputStateMessage = 0xCD12EEE7,
		ClientOSFetchUserSignInStateMessage = 0x6AAA7045,
		ClientOSHelpMessage = 0x591D13FA,
		ClientOSOverlayUIMessage = 0xB5B8266D,
		ClientOSUserInputStateChangedMessage = 0x1DB818D9,
		ClientOSUserInputStateMessage = 0xCA25CDFB,
		ClientOSUserSignInStateChangedMessage = 0x158DA07B,
		ClientOSUserSignInStateMessage = 0xBEB162D9,

		// Category: ClientPersistence
		ClientPersistenceAwardActivatedMessage = 0x6A3A389C,
		ClientPersistenceAwardChangedMessage = 0x7B29D903,
		ClientPersistenceAwardDeactivatedMessage = 0x59296D1D,
		ClientPersistenceAwardGainedMessage = 0xC224E121,
		ClientPersistenceBucketScoreChangedMessage = 0x5FD5AFA4,
		ClientPersistenceUnlockMessageBase = 0xF29D9FA5,

		// Category: ClientPlayer
		ClientPlayerAmmoPickupMessage = 0x55382A5E,
		ClientPlayerChangedAllowedToSpawnOnMessage = 0xC893E91F,
		ClientPlayerChangedMatchReadyStatusMessage = 0x6A883A0A,
		ClientPlayerChangedPlayerViewMessage = 0x219D24F8,
		ClientPlayerChangedSquadLeaderStatusMessage = 0xFBD9B77B,
		ClientPlayerChangedVoiceChannelMessage = 0xEBD20E13,
		ClientPlayerConnectMessage = 0x69E0643A,
		ClientPlayerDeletedMessage = 0x608997B9,
		ClientPlayerEnterEntryMessage = 0xA0804CB8,
		ClientPlayerEnterExitVehicleMessage = 0x9F775494,
		ClientPlayerInteractionEntityInRangeChangedMessage = 0xA720BBF,
		ClientPlayerInteractionWithPlayerEndedMessage = 0xC209F7E1,
		ClientPlayerInteractionWithPlayerStartedMessage = 0x773873CE,
		ClientPlayerKilledMessage = 0xBA932D87,
		ClientPlayerLocalSetMessage = 0x1C3F2AEB,
		ClientPlayerManDownMessage = 0xDE4CA154,
		ClientPlayerMeleeCounterWindowEndsMessage = 0x50200DE4,
		ClientPlayerMeleeCounterWindowStartsMessage = 0xBB56CEEB,
		ClientPlayerNewSquadOrderMessage = 0xF3AB9164,
		ClientPlayerOnWeaponUndeployFinishedMessage = 0x912CF6E5,
		ClientPlayerRequestCameraChangeMessage = 0x78B692EA,
		ClientPlayerSelectedUnlocksMessage = 0xF636028E,
		ClientPlayerSwitchSquadMessage = 0xA6C45B64,
		ClientPlayerSwitchTeamMessage = 0x6D8C386B,
		ClientPlayerUpdateCameraComponentMessage = 0x64A560C3,
		ClientPlayerVoiceSlotMessage = 0x3599C316,
		ClientPlayerWeaponPickupMessage = 0x5F669172,

		// Category: ClientSoldier
		ClientSoldierChangeCoverStateMessage = 0x92CB0D21,
		ClientSoldierOnJumpMessage = 0x8104627E,
		ClientSoldierOnLandMessage = 0x26E8543B,
		ClientSoldierPlayerEnteredWeaponMessage = 0x22547405,
		ClientSoldierWeaponOnSlotChangedMessage = 0x337D7258,

		// Category: ClientSoldierToComponents
		ClientSoldierToComponentsOnHandleDamageMessage = 0x554081FA,
		ClientSoldierToComponentsOnImpulseMessage = 0xE55A1D80,

		// Category: ClientSound
		ClientSoundVoiceOverFinishedMessage = 0xA7BF2C3E,

		// Category: ClientSpawn
		ClientSpawnSpawnedOrUnSpawnedMessage = 0x6079154A,

		// Category: ClientState
		ClientStateChangingStateMessage = 0xA50037B4,

		// Category: ClientVehicle
		ClientVehicleCriticalDamageMessage = 0xBD3B3A0F,

		// Category: ClientVehicleToComponents
		ClientVehicleToComponentsHealthChangedMessage = 0x42630776,

		// Category: ClientWeapon
		ClientWeaponDispersionUpdatedMessage = 0x2E978C2,
		ClientWeaponPlayerPrimaryOutOfAmmoMessage = 0xA0325B03,
		ClientWeaponPlayerPrimaryWeaponFireMessage = 0xDFCAD330,
		ClientWeaponPlayerWeaponChangeMessage = 0x26100BC2,
		ClientWeaponPlayerWeaponReloadBeginMessage = 0x929B8152,
		ClientWeaponPlayerWeaponReloadEndMessage = 0x2B9C1DDA,

		// Category: Commander
		CommanderActivateCameraMessageBase = 0xC6B43EAB,
		CommanderAwardCommanderScoreMessage = 0x26A2D8E7,
		CommanderAwardCommanderSquadScoreMessage = 0xB9E1C675,
		CommanderCommanderChangedMessage = 0xC6D8214C,
		CommanderSquadChangedMessage = 0xACF8486E,

		// Category: CommanderActions
		CommanderActionsActionStateChangedMessage = 0x784A3658,

		// Category: CommanderNetwork
		CommanderNetworkAbortActionMessage = 0x5374DD74,
		CommanderNetworkAddRequestFromSquadMessage = 0x8270DA94,
		CommanderNetworkApplyForSeatMessage = 0xBA9159EC,
		CommanderNetworkEMPDroneDeployedMessage = 0x9FD59560,
		CommanderNetworkEarlyWarningEndedMessage = 0x4DACB47,
		CommanderNetworkEarlyWarningStartedMessage = 0xCBC30C28,
		CommanderNetworkGunshipDeployedMessage = 0x15AB294,
		CommanderNetworkIssueOrderMessage = 0x346D5C97,
		CommanderNetworkJamEndedMessage = 0xF0843668,
		CommanderNetworkJamStartedMessage = 0x189C3787,
		CommanderNetworkLeaveSeatMessage = 0x90D90F18,
		CommanderNetworkMutinyAbortedMessage = 0xF690A659,
		CommanderNetworkMutinyCompletedMessage = 0xCE0EEE9F,
		CommanderNetworkMutinyStartedMessage = 0xBBEE8B53,
		CommanderNetworkOrderReplyMessage = 0x19D5487C,
		CommanderNetworkRadarScanStartedMessage = 0xEE7E03DA,
		CommanderNetworkRemoveRequestFromSquadMessage = 0x1D392B93,
		CommanderNetworkRequestActionFromCommanderMessage = 0x41A12489,
		CommanderNetworkSatelliteEMPEndedMessage = 0x245454ED,
		CommanderNetworkSatelliteEMPStartedMessage = 0xCB7B1CC2,
		CommanderNetworkScanEndedMessage = 0xB9F07C91,
		CommanderNetworkScanStartedMessage = 0x6ECC35FE,
		CommanderNetworkSelectedSquadMessage = 0xB2D72E9B,
		CommanderNetworkSquadLeaderRateCommanderMessage = 0x74A4859B,
		CommanderNetworkSquadReinforcedMessage = 0xC99CB11B,
		CommanderNetworkTomahawkLaunchedMessage = 0x22CCE0DE,
		CommanderNetworkTriggerActionMessage = 0x7CE8EFE6,
		CommanderNetworkTriggerOrderReplyMessage = 0x40D6BC4,
		CommanderNetworkTriggerRequestMessage = 0x46CBF9E9,
		CommanderNetworkUAVDroneDeployedMessage = 0x7473F37A,

		// Category: ComponentMods
		ComponentModsKnockBackModEventMessage = 0x4A2C9057,

		// Category: ComponentModsToComponents
		ComponentModsToComponentsEndStunMessage = 0x5E8AE160,
		ComponentModsToComponentsStartStunMessage = 0x2163770F,

		// Category: Coop
		CoopSpawnWaveMessage = 0x482E3EE3,

		// Category: Core
		CoreCleanupMessage = 0xA8C4ADF5,
		CoreDebugReadProfileGameDataMessage = 0xFE57B983,
		CoreDebugReadSaveGameDataMessage = 0x820BC569,
		CoreDemoStatusMessage = 0xB730FD02,
		CoreEnteredIngameMessage = 0x68AFE2B5,
		CoreExitIngameMessage = 0xF063C03C,
		CoreGameTimerMessage = 0x731AB6FC,
		CoreHibernateMessage = 0xF9EDE97F,
		CoreMainThreadInitMessage = 0xDE351ECA,
		CorePanicMessage = 0x7E267BC0,
		CoreQuitMessage = 0xE913E8AC,
		CoreQuittingInitiatedMessage = 0xC13F263F,
		CoreReadSaveGameDataDoneMessage = 0x8BC90278,
		CoreReadSaveGameDoneMessage = 0xF545F888,
		CoreSublevelStartStreamOutMessage = 0x549C42B5,
		CoreUpdateClipboardMessage = 0xD9D98608,
		CoreWriteProfileGameMessage = 0x5C5BA92D,
		CoreWriteSaveGameDoneMessage = 0xF2AEE127,
		CoreWriteSaveGameMessage = 0x98CDA887,

		// Category: Debug
		DebugSpawnGameEntityMessage = 0x90F484D1,

		// Category: ESportsMatchManager
		ESportsMatchManagerDelayedTerminationMessage = 0x3F0391D2,
		ESportsMatchManagerTooFewPlayersMessage = 0x769E6E92,

		// Category: Emblem
		EmblemTextureFinishedMessage = 0xFF816B6D,

		// Category: EntityToComponents
		EntityToComponentsResetMessage = 0x52C126C7,

		// Category: EntryComponent
		EntryComponentStanceChangedMessage = 0xF99FC939,

		// Category: EventSync
		EventSyncReachedClientMessage = 0x458F8B20,

		// Category: FieldUpgrades
		FieldUpgradesLevelUpPlayerMessage = 0xAFEB7C2F,

		// Category: GameControl
		GameControlJoinServerMessageBase = 0x8E3242B5,

		// Category: GlobalEventEntity
		GlobalEventEntityLocalMessage = 0xED135C9F,
		GlobalEventEntityLocalPlayerMessage = 0x95B53C4C,
		GlobalEventEntityNetworkedClientPlayerMessage = 0x5C512927,
		GlobalEventEntityNetworkedMessage = 0x6F65076D,
		GlobalEventEntityNetworkedServerPlayerMessage = 0x4CF319FB,

		// Category: Input
		InputAbortStateMessage = 0xF1977AE5,
		InputAnyButtonPressedMessage = 0x71DB36DE,
		InputAssignPlayerMessage = 0xB479922A,
		InputPlayerAssignedMessage = 0x621118EB,
		InputPlayerUnassignedMessage = 0xF68EC7F0,
		InputProfileChangeMessage = 0x5AB44B55,
		InputReconnectMessage = 0xF91838B1,
		InputReconnectedMessage = 0x772E7C70,
		InputStateCanceledMessage = 0xEFBFBDA8,
		InputUnassignPlayerMessage = 0xAFA16A71,
		InputWaitForAnyButtonMessage = 0x90BC3A68,

		// Category: InputMessages
		InputMessagesSingleInputEventMessage = 0x2BFEACC0,

		// Category: Juice
		JuiceSoldierRagdollActivateMessage = 0xD01279D2,
		JuiceSoldierRagdollDeactivateMessage = 0xB1BE2BB3,

		// Category: LevelConsole
		LevelConsoleSetActiveHealthStateMessage = 0x2776CBEA,

		// Category: LoadGame
		LoadGameBeginLoadMessage = 0xB2285CA7,

		// Category: MemoryCard
		MemoryCardBootCheckMessageBase = 0x1A451B7E,
		MemoryCardCreatedMessageBase = 0x12EC008E,
		MemoryCardDestroyedMessageBase = 0xB2CF954D,
		MemoryCardFindEntriesDoneMessageBase = 0x5E69EF79,
		MemoryCardFindEntriesMessageBase = 0x6F831E99,
		MemoryCardInitializedMessageBase = 0xE915A862,
		MemoryCardLoadDoneMessageBase = 0xC12EAAA8,
		MemoryCardLoadMessageBase = 0xC885A348,
		MemoryCardPopupHideMessageBase = 0xEC2DDCE4,
		MemoryCardPopupRequestMessageBase = 0xA128DD95,
		MemoryCardPopupResponseMessageBase = 0x1B86CA7,
		MemoryCardSaveDoneMessageBase = 0xEFD8908F,
		MemoryCardSaveMessageBase = 0xD191BB6F,

		// Category: Movie
		MovieAsyncUnloadMessage = 0x718DBFAD,

		// Category: Network
		NetworkAddCurrencyMessage = 0xBA755CD6,
		NetworkAddHealthMessage = 0xD0D1532D,
		NetworkChangeGameSettingMessage = 0xC281B80E,
		NetworkConnectedMessage = 0xB4F367CF,
		NetworkCreatePlayerMessage = 0xD204CF07,
		NetworkDestroyLocalPlayerMessage = 0x8B64FBCC,
		NetworkDifficultyChangedMessage = 0x387E3581,
		NetworkDisconnectedMessage = 0x2E6D10B1,
		NetworkEnableInstantCaptureMessage = 0x1AC04E0E,
		NetworkFirstPlayerEnteredMessage = 0xB8D1A4F0,
		NetworkForceEndModByClientMessage = 0xE4E6AC46,
		NetworkJuiceGameSessionMessage = 0x5C582AB0,
		NetworkJuiceSessionMessage = 0x1B2493DE,
		NetworkKillAllAIMessage = 0xDAABE59B,
		NetworkLevelInstalledMessage = 0x7D0A4186,
		NetworkLevelLoadedAckMessage = 0x6C32888,
		NetworkLoadLevelMessage = 0x4D10F000,
		NetworkMatchReadyStatusChangedMessage = 0x394E8BBE,
		NetworkMeleeAttackStartMessage = 0xEF058C1C,
		NetworkMetricsLevelCompleteMessage = 0x643FA9F8,
		NetworkMetricsLevelProgressMessage = 0x3A8574AC,
		NetworkMetricsSaveGameSavedMessage = 0x70A8DFAD,
		NetworkMovePlayerMessage = 0x6D09BE92,
		NetworkOnPlayerSpawnedMessage = 0xCAB70D78,
		NetworkPVZPlayerSelectedAISpawnerMessage = 0xF702CC32,
		NetworkPerformanceProfileMessage = 0x34800B23,
		NetworkPickupWeaponFromKitMessage = 0xE98E2C06,
		NetworkPlayerSelectedCustomizationAssetMessage = 0xCF7508A7,
		NetworkPlayerSelectedUnlockAssetsMessage = 0xF7531939,
		NetworkPlayerSelectedWeaponMessage = 0xD246688,
		NetworkRequestLoadLevelMessage = 0x3AFF49D1,
		NetworkScreenFadeMessage = 0x25E68C3A,
		NetworkSelectSpawnGroupMessage = 0x71D53CBC,
		NetworkSelectTeamMessage = 0x94F923A5,
		NetworkSetActiveWeaponSlotMessage = 0x249BCD98,
		NetworkSetCustomizationWeaponSlotMessage = 0x506EC869,
		NetworkSetPlayerViewMessage = 0xE973F00C,
		NetworkSettingsMessage = 0xAEA52315,
		NetworkShootSpaceOffsetMessage = 0x11924CB6,
		NetworkShowPathfindingDebugMessage = 0xA2A63BCA,
		NetworkSpawnCustomizationMessage = 0x1230896,
		NetworkSpawnHereMessage = 0x2F4E37F1,
		NetworkSpawnMessage = 0x9399590B,
		NetworkSpawnOnSelectedMessage = 0xB3DB72C3,
		NetworkSpawnVehicleCustomizationMessage = 0x7C9C8A4E,
		NetworkSpawnWaveFromIndexMessage = 0x21C83FA6,
		NetworkSuicideMessage = 0xAAEB6754,
		NetworkSynchronizeInternetSimulationStateMessage = 0xAB0830A5,
		NetworkTeleportToObjectiveMessage = 0x81FBAE85,
		NetworkTimeSyncMessage = 0x43853F22,
		NetworkTinyEventMessage = 0x56F4A9B6,
		NetworkUnSpawnCustomizationMessage = 0x9FAD902D,

		// Category: NetworkAI
		NetworkAIClientDispatchMessage = 0xB6932251,
		NetworkAIServerDispatchMessage = 0x889E688D,
		NetworkAIUpdateClientAIStateMessage = 0x1F5FFE0F,

		// Category: NetworkCamera
		NetworkCameraFreeCameraMessage = 0x587ACA24,
		NetworkCameraReplayMessage = 0x7B62E15A,

		// Category: NetworkGameAdministration
		NetworkGameAdministrationAddGameBanRequestMessage = 0xDF81D5E3,
		NetworkGameAdministrationAddGameBanResponseMessage = 0xFE588A71,
		NetworkGameAdministrationPacketMessage = 0x94A56F58,

		// Category: NetworkGameplay
		NetworkGameplayContinueMessage = 0xE831041B,

		// Category: NetworkLogic
		NetworkLogicFireDoublePlayerEventMessageBase = 0x39A37179,
		NetworkLogicFireEventMessageBase = 0x4D399B9F,
		NetworkLogicFirePlayerEventMessageBase = 0x5E4A62AC,

		// Category: Nui
		NuiCheckSpeechRecognizingMessage = 0x1F6EFF13,
		NuiSpeechGrammarActivationMessage = 0x23B53EE7,
		NuiSpeechGrammarActivationSettingsMessage = 0xA0FD1742,
		NuiSpeechGrammarDeactivationMessage = 0xD45888C6,
		NuiSpeechOngoingActivityMessage = 0x9AF47E50,
		NuiSpeechProblemDetectedMessage = 0x2B3EF999,
		NuiSpeechRuleRecognitionFailedMessage = 0x59C40D1E,
		NuiSpeechRuleRecognitionStartsMessage = 0xBBC0578E,
		NuiSpeechRuleRecognizedMessage = 0x337BA49A,
		NuiSpeechSoundEventMessage = 0xA68168BB,

		// Category: Origin
		OriginJoinableMessageBase = 0x83691CA7,
		OriginNotLoadedMessage = 0x924C4028,
		OriginOnlineMessage = 0x23D056F5,
		OriginRequestMessageBase = 0x6A38BFBE,
		OriginResponseMessageBase = 0x7694B4AC,

		// Category: PVZBattlepackSystem
		PVZBattlepackSystemConsumablesUpdatedMessage = 0x1288BEC1,

		// Category: PVZCommander
		PVZCommanderCommanderChangedMessage = 0x268AE4B0,

		// Category: PVZCommanderActions
		PVZCommanderActionsActionStateChangedMessage = 0x78295564,

		// Category: PVZCommanderNetwork
		PVZCommanderNetworkAbilityDeployedMessage = 0x640D7594,
		PVZCommanderNetworkAbortActionMessage = 0x3FD43B88,
		PVZCommanderNetworkAcceptSeatMessage = 0x7D81737F,
		PVZCommanderNetworkAddRequestFromSquadMessage = 0x782C4C28,
		PVZCommanderNetworkAirStrikeLaunchedMessage = 0x47766328,
		PVZCommanderNetworkApplyForSeatMessage = 0xD64DB110,
		PVZCommanderNetworkLeaveSeatMessage = 0xB95F8A4,
		PVZCommanderNetworkRemoveRequestFromSquadMessage = 0x634A2D6F,
		PVZCommanderNetworkRequestActionFromCommanderMessage = 0x828CE475,
		PVZCommanderNetworkSundropCollectedMessage = 0xCBD46A42,
		PVZCommanderNetworkSundropFromTimerMessage = 0xBACBBC2C,
		PVZCommanderNetworkTriggerActionMessage = 0xF2FB761A,
		PVZCommanderNetworkTriggerRequestMessage = 0x3C77AD5,

		// Category: PVZGameplay
		PVZGameplayAddCurrencyMessage = 0x6E39191E,
		PVZGameplayCancelManDownMessage = 0x8CF2D20E,
		PVZGameplayEnterVehicleMessage = 0x7CBC2D48,
		PVZGameplayReviveCancelledMessage = 0x29737BA8,
		PVZGameplayReviveCompletedMessage = 0x2C267A2E,
		PVZGameplayReviveStartedMessage = 0xF9EB9262,
		PVZGameplaySelfReviveMessage = 0x2531163F,
		PVZGameplayWaveCompleteMessage = 0x3DBDE014,

		// Category: PVZHealthModuleToComponents
		PVZHealthModuleToComponentsEndSpawnMessage = 0x3E7F74C7,
		PVZHealthModuleToComponentsStartSpawnMessage = 0x6928CC48,

		// Category: PVZNetwork
		PVZNetworkLicenseAwardedMessage = 0x7A30A177,
		PVZNetworkPVZBlazePlaylistCompletedMessage = 0x9293B60B,
		PVZNetworkPVZPlaylistTypeMessage = 0x79FB74AE,
		PVZNetworkSetTauntStateMessage = 0x65D333C3,
		PVZNetworkShieldDestroyedMessage = 0x2E26B2D0,
		PVZNetworkSpottingMessage = 0xB07E77A0,

		// Category: PVZPeerServerBackend
		PVZPeerServerBackendEventMessageBase = 0xD2736FE8,

		// Category: PVZPresence
		PVZPresenceRequestPeerGameMessageBase = 0xAEC0DA23,
		PVZPresenceResponsePeerGameMessageBase = 0x6F289411,

		// Category: PVZTelemetry
		PVZTelemetryAbilityMessage = 0x27E0BC5F,

		// Category: PVZUI
		PVZUIActivateSpectatorMessage = 0x430C65EE,
		PVZUIBytevaultNoRecordMessage = 0x5395BD72,
		PVZUIImmortalChangedMessage = 0x5CDED701,
		PVZUIJumpToMenuMessage = 0xAA611324,
		PVZUILoadScreenDismissedMessage = 0xAC8C52BF,
		PVZUIManDownCalloutMessage = 0xB3D91C72,
		PVZUIPopupHideMessage = 0x3EAA904,
		PVZUIPopupShowMessage = 0x36ACB0E7,
		PVZUISelectedKitChangedMessage = 0x1D43BB73,
		PVZUITeamReviveCalloutMessage = 0xD02DB2C4,
		PVZUITeamReviveTriggeredMessage = 0x65830D91,
		PVZUIToggleCustomizationMessage = 0xCA74F7A1,
		PVZUITriggerPopupHideMessage = 0xEF152BFC,
		PVZUITriggerPopupShowMessage = 0xDB42285F,

		// Category: PeerServerBackend
		PeerServerBackendRequestMessageBase = 0x94760F09,
		PeerServerBackendResponseMessageBase = 0x49B434BB,

		// Category: Performance
		PerformanceClientMessage = 0xB74FAA4F,
		PerformanceClientNetworkMessage = 0x5AACB251,
		PerformanceLogMessage = 0xF8C35792,
		PerformanceServerMessage = 0xA34CD693,
		PerformanceServerNetworkMessage = 0x6FB4938D,
		PerformanceShaderMessage = 0x1502E03F,

		// Category: PhysicsComponent
		PhysicsComponentOnDamageMessage = 0xE030FB20,
		PhysicsComponentOnImpulseMessage = 0xB7B1D530,

		// Category: PlayerFriendManager
		PlayerFriendManagerAbortFriendJoinMessage = 0x49B7C5A6,
		PlayerFriendManagerFriendJoinEventMessage = 0x792AB960,
		PlayerFriendManagerSetAllowCreateFriendSquadMessage = 0x336AFD83,

		// Category: PlaygroundServerBackend
		PlaygroundServerBackendResponseMessageBase = 0x53A332F8,

		// Category: Presence
		PresenceAchievementRequestMessageBase = 0x1CE99654,
		PresenceAuthenticationMessageBase = 0xEB453F82,
		PresenceAuthenticationRequestMessageBase = 0x3665A893,
		PresenceBFCommerceMessageBase = 0xD462887B,
		PresenceBFCommerceMetricMessageBase = 0x8973AC1F,
		PresenceBFCommerceRequestMessageBase = 0xB981B0CA,
		PresenceBattlelogMessageBase = 0x28B4024C,
		PresenceBattlelogRequestMessageBase = 0xA4E9739D,
		PresenceBattlepackMessageBase = 0x247EC611,
		PresenceBattlepackRequestMessageBase = 0xC3576BA0,
		PresenceBlobMessageBase = 0x7B1EF3C1,
		PresenceBlobRequestMessageBase = 0x6E31AFF0,
		PresenceBlockListMessageBase = 0x13A6B4E9,
		PresenceBlockListRequestMessageBase = 0x57BF7798,
		PresenceBrowserRequestMessageBase = 0xDC79FCFF,
		PresenceCalendarMessageBase = 0xF9247990,
		PresenceCalendarRequestMessageBase = 0xED3649C1,
		PresenceChallengesMessageBase = 0x991C772,
		PresenceChallengesRequestMessageBase = 0x3FAAD463,
		PresenceCommMessageBase = 0xB330874E,
		PresenceConnectionMessageBase = 0xEC4C1E74,
		PresenceConnectionRequestMessageBase = 0x70F40225,
		PresenceConsoleNewsMessageBase = 0x8D78357A,
		PresenceConsoleNewsRequestMessageBase = 0xC4C15B6B,
		PresenceDownloadMessageBase = 0x4D5F0256,
		PresenceDownloadRequestMessageBase = 0x54293347,
		PresenceEditorialDownloadCompleteMessage = 0xB44AC1CF,
		PresenceFriendMessageBase = 0xBDB07A30,
		PresenceFriendRequestMessageBase = 0x7ED685E1,
		PresenceFriendsListManagerSettingsMessageBase = 0x19E880B7,
		PresenceFriendsStatsMessageBase = 0xF963E862,
		PresenceFriendsStatsRequestMessageBase = 0x84917773,
		PresenceGameConfigurationMessageBase = 0x2DCA027C,
		PresenceGameConfigurationRequestMessageBase = 0xFBE13F2D,
		PresenceGameDataMessageBase = 0xEEAFCFBC,
		PresenceGameDataRequestMessageBase = 0xFB63F4ED,
		PresenceGameMessageBase = 0x11CD888C,
		PresenceGameQueueMessageBase = 0xF88682FD,
		PresenceGameRequestMessageBase = 0xC5F1645D,
		PresenceHostMigrationClearMessage = 0x296E362,
		PresenceHostMigrationGardenDefendedMessage = 0x302B1D49,
		PresenceHostMigrationSetGardenDamageMessage = 0xCD73C789,
		PresenceHostMigrationSetGardenMessage = 0x80A280C2,
		PresenceHostMigrationSetWaveMessage = 0xDAB235BC,
		PresenceHostMigrationSnapshotMessage = 0x8E6A19D7,
		PresenceInviteMessageBase = 0x227C544B,
		PresenceInviteRequestMessageBase = 0xFA71523A,
		PresenceJoinResultMessageBase = 0x3868F789,
		PresenceLicenseMessageBase = 0x1CDCBC79,
		PresenceLicenseMetricMessageBase = 0xD4C4781D,
		PresenceLicenseRequestMessageBase = 0xFD0E6D08,
		PresenceLivePartyMessageBase = 0x13A1EBA,
		PresenceMatchFeedMessageBase = 0x48B37D93,
		PresenceMatchmakerMessageBase = 0x81635301,
		PresenceMigrateDataMessageBase = 0xFEF4B653,
		PresenceMigrateDataRequestMessageBase = 0x640BF922,
		PresenceNickelMessageBase = 0xAED816C4,
		PresenceNickelRequestMessageBase = 0xC9A19F15,
		PresenceNucleusLoginUIRequestMessageBase = 0x3F1BBDFB,
		PresencePVZBlazeNewsMessageBase = 0xE6C5ED01,
		PresencePVZBlazePlaylistMessageBase = 0x570D9948,
		PresencePVZDeleteByteVaultRecordMessage = 0xB486292F,
		PresencePVZFetchBlazePlaylistMessage = 0xB2195801,
		PresencePVZFetchByteVaultRecordMessage = 0x6B74CB0A,
		PresencePVZFetchNewsMessage = 0xE25FF58,
		PresencePVZFetchPrivacyMessage = 0x4531AF11,
		PresencePVZFetchTosMessage = 0x57735ADF,
		PresencePVZFetchedByteVaultRecordResultMessage = 0xA9952202,
		PresencePVZGetByteVaultRecordMessage = 0xD2EB3860,
		PresencePVZGetByteVaultRecordResultMessageBase = 0x479FE1DC,
		PresencePVZGetByteVaultSubRecordMessageBase = 0x20385D91,
		PresencePVZGetByteVaultSubRecordResultMessageBase = 0xF98CE8B8,
		PresencePVZLoginCompleteMessageBase = 0x25293C14,
		PresencePVZPartyExternalPlayersMessageBase = 0xC9B1380D,
		PresencePVZPartyMessageBase = 0x77EC3110,
		PresencePVZQueryUserIdMessage = 0x88BD737D,
		PresencePVZServerFetchBlazePlaylistMessage = 0xAF6C9904,
		PresencePVZStoreLoginCompleteMessage = 0x3E1511DE,
		PresencePVZTelemetryOptInMessage = 0x4972DC48,
		PresencePVZUpdateByteVaultRecordMessageBase = 0x4A2965D2,
		PresencePVZUpdateByteVaultRecordResultMessageBase = 0xFC5B537B,
		PresencePVZUpdateClientUtilManagerRecordMessageBase = 0xFDCEFC8C,
		PresencePVZUpdateTelemetryOptInRequestMessage = 0x94C93068,
		PresencePartyMessageBase = 0xFA1C808C,
		PresencePartyRequestMessageBase = 0x50B95C5D,
		PresencePeerGameMessageBase = 0x19F7BF8E,
		PresencePeerGameRequestMessageBase = 0xD71D721F,
		PresencePeerGameUpdateMessageBase = 0x2DEAA47F,
		PresencePingUpdatedMessageBase = 0x628E72E7,
		PresencePlayerEmblemMessageBase = 0x4C8BCF1F,
		PresencePlayerEmblemRequestMessageBase = 0x469F96EE,
		PresencePlaygroundRequestMessageBase = 0xC5D47B32,
		PresencePlaygroupAttributesMessageBase = 0xF01A7A96,
		PresencePlaygroupMessageBase = 0x37F697D9,
		PresencePlaygroupRequestMessageBase = 0x5D1D0AE8,
		PresencePrivilegeRequestMessageBase = 0x37933C4C,
		PresencePrivilegeRequestResultMessageBase = 0x5E00D7E5,
		PresenceProfileInfoMessageBase = 0xC4572B07,
		PresenceProfileInfoRequestMessageBase = 0x96F73BF6,
		PresenceProgressionMessageBase = 0x650E4917,
		PresenceProgressionRequestMessageBase = 0x1DCF7E6,
		PresenceProgressionUploadedMessage = 0xC1F97200,
		PresencePushNotificationMessageBase = 0xFA29E8B1,
		PresenceResetStorageMessageBase = 0xCD8D1CAE,
		PresenceResetStorageRequestMessageBase = 0x9C7B7BBF,
		PresenceRspMessageBase = 0xE7FBCBB3,
		PresenceRspRequestMessageBase = 0x5A9D2482,
		PresenceServerBannerMessageBase = 0x1300E2B3,
		PresenceServerBannerRequestMessageBase = 0x38225B82,
		PresenceServerBrowserMessageBase = 0xC194EE0B,
		PresenceServerBrowserRequestMessageBase = 0x3BD6077A,
		PresenceServerRentalMessageBase = 0x96BE4CA7,
		PresenceServerRentalRequestMessageBase = 0x4DA59816,
		PresenceSetupInfoMessageBase = 0x8B915C0B,
		PresenceStateMessageBase = 0x8488795,
		PresenceStateRequestMessageBase = 0x9AC5EDA4,
		PresenceStorageMessageBase = 0xC52620BB,
		PresenceStorageRequestMessageBase = 0x36ADB28A,
		PresenceStoreMessageBase = 0xF4E7D25D,
		PresenceStoreRequestMessageBase = 0x7970E5EC,
		PresenceUserIdMessageBase = 0x79CC665E,
		PresenceUserIdRequestMessageBase = 0x3195F04F,
		PresenceUserSettingsMessageBase = 0xCE2B9ED6,
		PresenceUserSettingsRequestMessageBase = 0xB618BFC7,
		PresenceUserTitleInfoMessageBase = 0xB7FB9B7D,
		PresenceUserTitleInfoRequestMessageBase = 0xF039DC8C,
		PresenceWebAuthenticationMessageBase = 0xD8674DF2,
		PresenceWebAuthenticationRequestMessageBase = 0x3380AE3,
		PresenceWebFeedRequestMessageBase = 0x41B96141,
		PresenceWebMessageBase = 0xEC719A12,
		PresenceWebRequestMessageBase = 0xDAEF9103,
		PresenceXPromoMessageBase = 0xE4BE91F5,
		PresenceXPromoRequestMessageBase = 0x7BBEAA04,

		// Category: ProfileOptions
		ProfileOptionsApplyMessage = 0xF72B7A1,
		ProfileOptionsSettingsLoadedMessage = 0xF731FED7,
		ProfileOptionsSettingsPreSaveMessage = 0xA4BF576,
		ProfileOptionsSettingsSavedMessage = 0x1203C555,

		// Category: PunkBuster
		PunkBusterExecCmdMessage = 0x8C212AF8,
		PunkBusterMessageMessage = 0x9AC7B22,

		// Category: PushNotification
		PushNotificationChallengeActiveDeltaMessage = 0x16F3AD2A,
		PushNotificationPresencePlayingDeltaMessage = 0x9B606338,
		PushNotificationPresentMessageBase = 0xB0783883,

		// Category: SaveGame
		SaveGameBeginSaveMessage = 0x65DD4A47,
		SaveGameSaveMessage = 0xFB40F920,

		// Category: Server
		ServerApplyConfigurationMessage = 0x4262E46F,
		ServerClientConnectionConnectedMessage = 0x87A03EBB,
		ServerClientConnectionRemovedMessage = 0xC7809646,
		ServerDoneLoadGameMessage = 0xA3589F43,
		ServerLevelLoadedMessage = 0x236C395A,
		ServerLevelUnloadedMessage = 0xD3318581,
		ServerLoadGameMessage = 0xAB12C7A3,
		ServerLoadLevelMessageBase = 0xF8429A0E,
		ServerRequestScreenshotMessage = 0x8B65CD36,
		ServerResendSyncedSettingsMessage = 0x6464923,
		ServerResetConfigurationMessage = 0xF01263EE,
		ServerRestartForESportsMatchMessage = 0x23297468,
		ServerRestartTimerMessage = 0x62AB071B,
		ServerRotateLevelMessage = 0xD2DF48E4,
		ServerScreenshotReceivedMessage = 0x5D0E8408,
		ServerStartedMessage = 0x3AD97D0A,
		ServerStopMessageBase = 0xB455ADA6,
		ServerStoppedMessage = 0xC5C16A42,
		ServerUnloadLevelMessage = 0x6E1933E0,

		// Category: ServerAI
		ServerAIActorSpawnedMessage = 0x1A12C72,
		ServerAIChangePauseSettingMessage = 0xDF1CB641,
		ServerAICoopAllWavesCompleteMessage = 0xF4F8E1EE,
		ServerAICoopWaveCompleteMessage = 0x20F3399C,
		ServerAICoopWaveSubgroupSpawnedMessage = 0xC6904C34,
		ServerAIDestructibleActivatedMessage = 0xD7DB984A,
		ServerAIDestructibleDestroyedAndAIDeadMessage = 0x1B2A3713,
		ServerAISetFlockIdMessage = 0x49BEB3E1,
		ServerAISpawningManagedAIMessage = 0xAA4EABF5,

		// Category: ServerAdmin
		ServerAdminBanPlayerMessage = 0x1896A9FA,
		ServerAdminSetServerNameMessage = 0x857C22E4,

		// Category: ServerAdministration
		ServerAdministrationEventsEnabledMessage = 0xB460B85F,
		ServerAdministrationLoginMessage = 0xC817EA06,
		ServerAdministrationPacketMessageBase = 0x76937D58,
		ServerAdministrationPasswordMessage = 0xC05112BA,
		ServerAdministrationQuitMessage = 0x8BC1ABBC,
		ServerAdministrationRestartRequiredMessage = 0xFE01029B,

		// Category: ServerBackend
		ServerBackendBattlelogTransactionMessageBase = 0x3DB261B0,
		ServerBackendBattlepackRequestMessageBase = 0xF975CF98,
		ServerBackendBattlepackResponseMessageBase = 0x1DF2AE0A,
		ServerBackendDownloadCompleteMessageBase = 0xFCE292A7,
		ServerBackendFinalizingMessage = 0xB6FB30D0,
		ServerBackendGameReportCompleteMessage = 0x17C32686,
		ServerBackendOnFinalizationCompleteMessage = 0x2835AF25,
		ServerBackendOnGameReportCompleteMessage = 0x586088E7,
		ServerBackendOnGameReportMetricMessage = 0xF5F2980A,
		ServerBackendRoleRequestMessageBase = 0x251960FF,
		ServerBackendRoleResponseMessageBase = 0xE438E98D,

		// Category: ServerBanList
		ServerBanListEventMessageBase = 0xF779C4BD,

		// Category: ServerBuff
		ServerBuffAppliedMessage = 0xD2434FB9,
		ServerBuffKilledMessage = 0x25FB561F,

		// Category: ServerCharacter
		ServerCharacterCharacterDamageMessage = 0x8D5DBFA0,
		ServerCharacterKilledMessage = 0x6EE49CF1,

		// Category: ServerClub
		ServerClubMemberCreatedMessage = 0xC67F1FE3,
		ServerClubMemberDeletedMessage = 0x173287FE,

		// Category: ServerCollision
		ServerCollisionExplosionDamageMessage = 0xDE0EA04B,
		ServerCollisionExplosionPackDestroyedMessage = 0xF90DA03A,
		ServerCollisionExplosionPackPlacedMessage = 0xD6E2E3A6,
		ServerCollisionExplosionSpawnMessage = 0x376E37B,
		ServerCollisionExplosionUnSpawnMessage = 0xAEF5DB60,
		ServerCollisionGrenadeCollisionMessage = 0xE3013455,
		ServerCollisionGrenadeThrowMessage = 0x1B5801DD,
		ServerCollisionProjectileFireMessage = 0xAF088758,
		ServerCollisionProjectileImpactMessage = 0x44F988C2,
		ServerCollisionProjectileTimeoutMessage = 0x9868069B,
		ServerCollisionSmokeGrenadeMessage = 0xAFC48134,

		// Category: ServerComponent
		ServerComponentEntryComponentProcessedInputMessage = 0x3816C103,
		ServerComponentEntryOnPlayerEntersMessage = 0x14956EB9,
		ServerComponentEntryOnPlayerExitsMessage = 0x3697B451,
		ServerComponentEntryOnUnspawnMessage = 0xDE3634F1,
		ServerComponentWeaponOnSpawnMessage = 0xAD15FDBC,
		ServerComponentWeaponOnUnspawnMessage = 0x73114207,

		// Category: ServerConnection
		ServerConnectionExitMessage = 0x1708637D,
		ServerConnectionInitMessage = 0xF5E71A27,

		// Category: ServerControllable
		ServerControllableSpawnDoneMessage = 0x86424E51,
		ServerControllableUnspawnDoneMessage = 0x66EFA9AA,

		// Category: ServerControllableToComponents
		ServerControllableToComponentsPlayerEnteredMessage = 0x82E829F7,
		ServerControllableToComponentsPlayerExitMessage = 0xCE96115E,

		// Category: ServerEntity
		ServerEntityBangerEntityOnSpawnMessage = 0xFA50808C,
		ServerEntityBangerEntityOnUnspawnMessage = 0x4E9AD677,
		ServerEntityPickupOnSpawnMessage = 0xDD0241FE,
		ServerEntityPickupOnUnspawnMessage = 0x3C1EE145,

		// Category: ServerExplosion
		ServerExplosionOnShockwaveMessage = 0xCE1BC9E6,

		// Category: ServerGameAdministration
		ServerGameAdministrationEventMessageBase = 0xCA5C77D2,
		ServerGameAdministrationGameSettingsUpdateMessage = 0x811735F1,
		ServerGameAdministrationRefreshGameAttributesMessage = 0xBC2C7757,
		ServerGameAdministrationResetServerMessage = 0x144110BB,
		ServerGameAdministrationUpdateGameServerListsMessage = 0x45DDFC40,

		// Category: ServerGameManager
		ServerGameManagerAddGameBanRequestMessage = 0x31951065,
		ServerGameManagerAddGameBanResponseMessage = 0x8C22E737,
		ServerGameManagerAddQueuedPlayerMessage = 0xC02BE11,
		ServerGameManagerChangeGameParametersMessageBase = 0x44DAE1D1,
		ServerGameManagerCreatingGameMessageBase = 0xF98866CC,
		ServerGameManagerCreatingReconfigurableGameMessage = 0xC3E739E9,
		ServerGameManagerGameCreatedMessageBase = 0x6B67652D,
		ServerGameManagerGameDestructingMessage = 0xCA5515AE,
		ServerGameManagerGameParametersChangedMessageBase = 0xBF0AE495,
		ServerGameManagerGameResetMessageBase = 0xF4CB9498,
		ServerGameManagerGetGameDataMessage = 0x653E2EBE,
		ServerGameManagerPlayerJoiningMessageBase = 0xCE704852,
		ServerGameManagerPlayerJoiningQueueMessage = 0xEAB8D0F6,
		ServerGameManagerPlayerRemovedMessageBase = 0x13BB2952,
		ServerGameManagerReconfigurableGameCreatedMessage = 0x83F38408,
		ServerGameManagerRestartLevelRequestMessage = 0x263AAC46,
		ServerGameManagerUpdateCapacityMessageBase = 0x88B06DA6,
		ServerGameManagerValidateBannerRequestMessage = 0xB16BB1B5,
		ServerGameManagerValidateBannerResponseMessage = 0x1398FBE7,

		// Category: ServerGameMode
		ServerGameModeResetMessage = 0x2DB198D3,

		// Category: ServerGameplay
		ServerGameplayAIBlindedMessage = 0x5A0F545,
		ServerGameplayCTFFlagCapturedMessage = 0x8056797C,
		ServerGameplayCTFFlagDroppedMessage = 0x720BF924,
		ServerGameplayCTFFlagPickedUpMessage = 0xB6706A29,
		ServerGameplayCTFFlagReturnedMessage = 0xC4BB3C17,
		ServerGameplayCapturePointCapturedMessage = 0x49B16A09,
		ServerGameplayCapturePointCapturingMessage = 0x6584E008,
		ServerGameplayCapturePointChangedMessageBase = 0xD34EDB3E,
		ServerGameplayCapturePointLostMessage = 0xFA17E34D,
		ServerGameplayCapturePointPlayerEnteredMessage = 0xB5F42613,
		ServerGameplayCapturePointResetMessage = 0x44098DBC,
		ServerGameplayCheckpointActivatedMessage = 0xF9DE70D6,
		ServerGameplayCheckpointTriggeredMessage = 0x3D4994B2,
		ServerGameplayDeserterMessage = 0x387C1E27,
		ServerGameplayDeserterReturnMessage = 0x8D77BB8D,
		ServerGameplayFightHarderMessage = 0x5D0A0FBD,
		ServerGameplayGameModeResetMessage = 0xA2575299,
		ServerGameplayPlayerBaseDestroyedMessage = 0xE585CA4,
		ServerGameplayPlayerMenuCancelMessage = 0x1C6C0B87,
		ServerGameplayPlayerMenuOkMessage = 0xFC64D065,
		ServerGameplayPreviousWeatherStateMessage = 0x6542D49F,
		ServerGameplayServerPlayerMenuCancelMessage = 0x8F68EAC2,
		ServerGameplayServerPlayerMenuOkMessage = 0xDC251960,
		ServerGameplaySetPostRoundLogicMessage = 0xF5FF7957,
		ServerGameplaySetPreRoundLogicMessage = 0x91DEB1E8,
		ServerGameplayTeamLostLeadMessage = 0x9D851F4,
		ServerGameplayTeamReinforceMessage = 0x5D80ABD1,
		ServerGameplayTeamTakeLeadMessage = 0xDA33954B,
		ServerGameplayVoiceOverFinishedMessage = 0x9AFD1DCB,

		// Category: ServerHitReactionToComponents
		ServerHitReactionToComponentsHitMessage = 0x37F36145,

		// Category: ServerInput
		ServerInputDeactivateInputRestrictionMessage = 0x16FE9927,
		ServerInputReactivateInputRestrictionMessage = 0xBB90F4B1,

		// Category: ServerLevel
		ServerLevelCompletedMessage = 0xF7EB3290,
		ServerLevelDestroyedMessage = 0x95582CDE,
		ServerLevelSpawnEntitiesBeginMessage = 0x25241B3C,
		ServerLevelSpawnEntitiesEndMessage = 0x9C293A34,
		ServerLevelStartedMessage = 0xDCAF4FDC,

		// Category: ServerLevolution
		ServerLevolutionTriggeredMessage = 0xAD39BDC7,

		// Category: ServerMapSequencer
		ServerMapSequencerControlledInfoMessage = 0xA01DD0DE,
		ServerMapSequencerEventMessageBase = 0x4BBAE2C3,
		ServerMapSequencerLevelLoadedMessage = 0x3845EA0B,
		ServerMapSequencerMaxPlayerCountMessage = 0x7FC99E7E,
		ServerMapSequencerSwitchingLevelsMessage = 0x2F39C42D,

		// Category: ServerMetrics
		ServerMetricsDetonateExplosionMessage = 0xE551594D,
		ServerMetricsObjectiveSuccessMessage = 0x60291090,
		ServerMetricsSaveGameLoadedMessage = 0xBCFB46B4,
		ServerMetricsSaveGameSavedMessage = 0x70EEF316,

		// Category: ServerMission
		ServerMissionObjectiveCompletedMessage = 0x4F4EC4C5,

		// Category: ServerPeer
		ServerPeerInitializedMessage = 0x519E30E5,
		ServerPeerLoadLevelMessage = 0xCC048F59,

		// Category: ServerPlayer
		ServerPlayerAboutToClearCharacterMessage = 0xA5D5A02E,
		ServerPlayerAboutToCreateForConnectionMessage = 0x4963AB67,
		ServerPlayerBoostUpdateMessage = 0x49B242C,
		//ServerPlayerChangeChatChannelMessage = 0x322B6783,
		ServerPlayerChangedCharacterMessage = 0x40FA3F03,
		//ServerPlayerChangedSquadSpawnerStatusMessage = 0x9760D690,
		//ServerPlayerChangedVoiceChannelMessage = 0x82901B4F,
		ServerPlayerChatMessage = 0xDBC6F766,
		ServerPlayerCommanderOrderReplyMessage = 0xC2676094,
		ServerPlayerConsumableConsumedMessage = 0x125128F3,
		//ServerPlayerCreateMessage = 0x3051E83C,
		//ServerPlayerCreatedForConnectionMessage = 0xC2AFBD15,
		ServerPlayerDeadMessage = 0x3B79585C,
		ServerPlayerDebugFriendZoneSpawnMessage = 0xA43DC3E,
		//ServerPlayerDestroyMessage = 0xE0BFD57A,
		//ServerPlayerEnterEntryMessage = 0x4641DCE4,
		ServerPlayerEnteredCommanderMessage = 0x9A6C92E1,
		//ServerPlayerEnteredLevelMessage = 0x9B7EA47,
		//ServerPlayerExitEntryMessage = 0x1613690C,
		ServerPlayerFieldUpgradeUpdateMessage = 0x6743B21B,
		//ServerPlayerInstantSuicideMessage = 0x83EE48C7,
		ServerPlayerInteractionEntityInRangeChangedMessage = 0xECC7E5E3,
		//ServerPlayerKilledMessage = 0xC7ABB9DB,
		ServerPlayerKitPickedupMessage = 0xB414B2FB,
		//ServerPlayerKitReplacedMessage = 0xD8BF0D26,
		//ServerPlayerLeftLevelMessage = 0xF61AD95,
		//ServerPlayerLevelLoadedMessage = 0x52D00BE9,
		ServerPlayerLicensesAvailableMessage = 0x484EE869,
		//ServerPlayerManDownRevivedMessage = 0x69596737,
		//ServerPlayerManuallySelectedSpawnPointMessage = 0x4370E929,
		//ServerPlayerMeleeInteruptedMessage = 0x55C10988,
		ServerPlayerNewCommanderOrderMessage = 0x3C503F9A,
		ServerPlayerNoInteractivityKickMessage = 0x6B2AEA5A,
		ServerPlayerOnPickupMessage = 0x8EC8768D,
		//ServerPlayerReleasingLevelMessage = 0x840D85E2,
		//ServerPlayerRespawnMessage = 0xC935A574,
		//ServerPlayerReviveAcceptedMessage = 0x942685A2,
		//@ServerPlayerReviveMessage = 0x25B72903,
		//ServerPlayerReviveRefusedMessage = 0xD6BF76B5,
		//ServerPlayerSpawnAtVehicleMessage = 0x690B5B2E,
		//ServerPlayerSpawnOnPlayerMessage = 0x56E23F11,
		//ServerPlayerSpawnOnSelectedSpawnPointMessage = 0x7D4ABAFC,
		ServerPlayerSpawnedAIPlayerMessage = 0xF9B074D9,
		//ServerPlayerSquadLeaderStatusChangedMessage = 0x3BB8DB07,
		ServerPlayerStartedTauntMessage = 0x91D26283,
		//ServerPlayerSwitchSquadMessage = 0xE21CBBB8,
		//ServerPlayerSwitchTeamMessage = 0xDAC6CEB7,
		//ServerPlayerTeamKillKickMessage = 0x1BB0318D,
		ServerPlayerTickMessage = 0x742F39AD,

		// Category: ServerProjectile
		ServerProjectileMissileDestroyedMessage = 0x9EE87819,
		ServerProjectileOnCollisionMessage = 0xC48281C1,
		ServerProjectileOnPotentialHitMessage = 0x4DCDDC5A,
		ServerProjectileOnSpawnMessage = 0xEA2436A4,

		// Category: ServerReservedSlotsList
		ServerReservedSlotsListEventMessageBase = 0x56F023,

		// Category: ServerRound
		ServerRoundInterruptedMessage = 0xC9FDC4AF,
		ServerRoundOverMessage = 0x16BABB47,
		ServerRoundPlayerDestroyedGameReportCompleteMessage = 0x442F41D0,
		ServerRoundResetMessage = 0x4BB8DE5C,
		ServerRoundStartMessage = 0x399DAAE9,

		// Category: ServerScript
		ServerScriptTickMessage = 0x32E46611,

		// Category: ServerSimpleMelee
		ServerSimpleMeleeOnAttackMessage = 0x45EDDA68,
		ServerSimpleMeleeOnAttackerDiedMessage = 0x48E441B3,
		ServerSimpleMeleeOnDefendMessage = 0xB0F1BFE8,
		ServerSimpleMeleeOnKillMessage = 0x5CA6E302,
		ServerSimpleMeleeOnRecoveryFinishedMessage = 0x73D657D1,
		ServerSimpleMeleeOnRecoveryStartedMessage = 0x19E90CE2,

		// Category: ServerSoldier
		ServerSoldierChangingWeaponMessage = 0x83F0F160,
		ServerSoldierDamagedMessage = 0xBEF230E,
		ServerSoldierFiringMessage = 0xDA243E5C,
		ServerSoldierManDownMessage = 0xBF3BF771,
		ServerSoldierOnInitMessage = 0x608CAA9A,
		ServerSoldierSelfHealMessage = 0x745F73DD,

		// Category: ServerSoldierSuppression
		ServerSoldierSuppressionSuppressMessage = 0x2C51D169,

		// Category: ServerSound
		ServerSoundVoiceOverFinishedMessage = 0x49A82562,

		// Category: ServerStaticModel
		ServerStaticModelDamagedPartByPlayerMessage = 0x310DA64C,
		ServerStaticModelDestroyedAllCollapsablePartsMessage = 0x2153F65E,
		ServerStaticModelDestroyedPartMessage = 0x63713D48,
		ServerStaticModelGroupDestroyedPartMessage = 0xB407017,
		ServerStaticModelSpawnMessage = 0xB707E6C7,

		// Category: ServerSubLevel
		ServerSubLevelOnStreamedInMessage = 0xF2AA6342,

		// Category: ServerUnlockList
		ServerUnlockListEventMessageBase = 0xDA3FBB60,
		ServerUnlockListRefreshMessage = 0x7D3C7484,

		// Category: ServerUnlockSystem
		ServerUnlockSystemSetupMessage = 0xD43CFE59,

		// Category: ServerVehicle
		ServerVehicleDamageMessage = 0x936D3098,
		ServerVehicleDestroyedMessage = 0x234D2D0,
		ServerVehicleDisabledMessage = 0x2BD320A3,
		ServerVehicleEnterMessage = 0xBE8B9F3B,
		ServerVehicleEnterRestrictionMessage = 0xF6470C0F,
		ServerVehicleExitMessage = 0x7147573,
		ServerVehicleForceArmamentReturnMessage = 0xD597A7A9,
		ServerVehicleLockableMessage = 0xEB7062D2,
		ServerVehicleSpawnDoneMessage = 0x809EF7A8,
		ServerVehicleSwitchTeamMessage = 0x1554DE7C,
		ServerVehicleUnspawnMessage = 0x7AAB1773,

		// Category: ServerWeapon
		ServerWeaponArtilleryFiredMessage = 0x383307F5,
		ServerWeaponLaserDesignatorMessage = 0x3405BDA,
		ServerWeaponMortarStrikeMessage = 0x59534AEC,
		ServerWeaponOnActivateMessage = 0xD203451,
		ServerWeaponOnDeactivateMessage = 0xCB8031F0,
		ServerWeaponPlayerEquippedWeaponMessage = 0xFD08F331,
		ServerWeaponPlayerPrimaryFireShotSpawnedMessage = 0xD3A8C934,
		ServerWeaponPlayerPrimaryOutOfAmmoMessage = 0x6065A85F,
		ServerWeaponPlayerPrimaryWeaponChargingBeginMessage = 0xD699874C,
		ServerWeaponPlayerPrimaryWeaponChargingEndMessage = 0xAE9F2944,
		ServerWeaponPlayerPrimaryWeaponFireAutomaticBeginMessage = 0xE0E15456,
		ServerWeaponPlayerPrimaryWeaponFireAutomaticEndMessage = 0xCCFA61DE,
		ServerWeaponPlayerPrimaryWeaponFireMessage = 0xF07D0D6C,
		ServerWeaponPlayerPrimaryWeaponPrimingBeginMessage = 0x8CDC7855,
		ServerWeaponPlayerPrimaryWeaponPrimingEndMessage = 0xDA0A9ADD,
		ServerWeaponPlayerReloadMessage = 0x5508E2EB,
		ServerWeaponPlayerResupplyMessage = 0x355DCDDE,
		ServerWeaponPlayerWeaponReloadEndMessage = 0x77220006,
		ServerWeaponPlayerWeaponRemovedMessage = 0xDD9C121A,
		ServerWeaponReplacedMessage = 0xC280E221,
		ServerWeaponWeaponComponentActivateMessage = 0xAF8E177D,
		ServerWeaponWeaponComponentReloadMessage = 0xF6997EF5,

		// Category: Session
		SessionPlayerAuthenticatedMessage = 0x5CED24EA,
		SessionPlayerJoinedMessage = 0xC665DD80,
		SessionPlayerLeftMessage = 0xDA958418,

		// Category: SoldierToComponents
		SoldierToComponentsInitializedMessage = 0x98C61EAF,
		SoldierToComponentsOnActionStateChangedMessage = 0xCEB9AD69,
		SoldierToComponentsOnClearSpottingMessage = 0x7CE288B7,
		SoldierToComponentsOnCustomizeSoldierMessage = 0xCBE442AD,
		SoldierToComponentsOnIncapableMessage = 0x60E4187D,
		SoldierToComponentsReviveMessage = 0xF9AD99D8,

		// Category: SpikeInternal
		SpikeInternalMessagePartMessage = 0x6A62B011,
		SpikeInternalMessageWrapperMessage = 0xF306C535,

		// Category: Stat
		StatClubRecordClosingMessage = 0xC6F3E3FA,
		StatClubRecordCreatedMessage = 0x37C6B829,
		StatDamageHelperMessage = 0x4C802DF1,
		StatDisableMessage = 0xA6D2448,
		StatEnableMessage = 0xB1075C3D,
		StatEventEntityTriggerMessage = 0x3EF8BD73,
		StatEventMessageBase = 0xB4DBFD45,
		StatFinalizeStatsCompletedMessage = 0xE478468A,
		StatFinalizeStatsMessageBase = 0xB0B661D2,
		StatGainAwardMessage = 0x4D0125BC,
		StatGainRankMessage = 0xFC35DA8B,
		StatPlayerRecordClosingMessage = 0x10D17F1,
		StatPlayerRecordCreatedMessage = 0x2F4C53A2,
		StatPointsMessageBase = 0x6182A896,
		StatTriggerEntityMessage = 0x3307DF3F,

		// Category: Statistics
		StatisticsEventMessageBase = 0x135BAE92,

		// Category: StreamInstall
		StreamInstallChunkInstalledMessage = 0xEDB77E48,
		StreamInstallGameInstalledMessage = 0x8DF056BD,
		StreamInstallInstallDoneMessage = 0x85AC0972,
		StreamInstallInstallProgressMessage = 0x30EBF48F,
		StreamInstallInstallingMessage = 0xCF2385D2,
		StreamInstallRequestResumeMessage = 0xD29E557B,
		StreamInstallRequestSuspendMessage = 0x897460A8,

		// Category: SubLevel
		SubLevelDestroyedMessage = 0x3C6D329F,
		SubLevelEntitiesCreatedMessage = 0xA22D9B61,
		SubLevelFromClientRequestBundleBaselineMessage = 0x374C6EAD,
		SubLevelFromClientSubLevelLoadedMessage = 0x9584DD06,
		SubLevelToClientDropBundleBaselineMessage = 0xD70A518,
		SubLevelToClientLoadRequestsMessage = 0x29A75D1A,
		SubLevelToClientSubLevelNameMessage = 0xB95A772B,
		SubLevelToClientUnloadRequestsMessage = 0x273B11C1,

		// Category: SyncedSequence
		SyncedSequenceStateChangeMessageBase = 0xF8346953,

		// Category: TabletCommander
		TabletCommanderAbortActionMessage = 0xF7C32800,
		TabletCommanderAcknowledgedActionMessage = 0xC9E6A39E,
		TabletCommanderActionEnteredStateMessage = 0x94BC7D14,
		TabletCommanderAwardGainedMessage = 0x389C8575,
		TabletCommanderChatMessage = 0x13DB67EA,
		TabletCommanderCombatAreaMessage = 0xFCA6B55,
		TabletCommanderConnectionApprovedMessage = 0xE5ADBD29,
		TabletCommanderConnectionDeniedMessage = 0xF9B670A5,
		TabletCommanderDeniedActionMessage = 0xC63CB54D,
		TabletCommanderEnemyCommanderChangedMessage = 0x77B8129C,
		TabletCommanderJoinServerMessage = 0x7B04F093,
		TabletCommanderLevolutionMessage = 0x91084CA1,
		TabletCommanderLoadLevelActionStateMessage = 0x6290A50D,
		TabletCommanderLoadLevelLevolutionStateMessage = 0xD5F73EA6,
		TabletCommanderLoadLevelMessage = 0x28F7F1A4,
		TabletCommanderLoadLevelPlayerDataMessage = 0x482B7207,
		TabletCommanderLoadLevelRushMessage = 0x1DD2D138,
		TabletCommanderLoadLevelSquadBarMessage = 0x98905EE7,
		TabletCommanderMutinyCompletedMessage = 0x602F1CAB,
		TabletCommanderPingMessage = 0xB5B22EA4,
		TabletCommanderPlayerJoinedMessage = 0xC72A6C4,
		TabletCommanderPlayerKilledMessage = 0x52E05F84,
		TabletCommanderPlayerLeftMessage = 0x89779E5C,
		TabletCommanderPongMessage = 0x7EDADE2,
		TabletCommanderRankGainedMessage = 0x46712DA2,
		TabletCommanderRoundOverMessage = 0x31A511F8,
		TabletCommanderScoreBoardMessage = 0xE85C5286,
		TabletCommanderScoringEventMessage = 0x368C11F5,
		TabletCommanderSelectedSquadChangedMessage = 0x56E86E0D,
		TabletCommanderTriggerActionMessage = 0x9D666092,
		TabletCommanderTryConnectMessage = 0x7834C555,

		// Category: UI
		UIAssetChangedMessage = 0x13BC35C0,
		UIControllerConnectedMessage = 0xFE6627F1,
		UIControllerDisconnectedMessage = 0xFB2514F,
		UIControlpointChangedTeamMessage = 0xF4AD7466,
		UICycleRadioChannelMessage = 0x31C67B70,
		UIDamageMessage = 0x318336B9,
		UIDeactivateCameraMessageBase = 0x92DDDBE6,
		UIDeployScreenUpdateCameraMessage = 0x72D2C7DD,
		UIDialogScreenPushedMessage = 0x95A85A9,
		UIEndOfRoundReadyMessage = 0x1D1B5F3D,
		UIEnterFrontendMessage = 0x4C885C74,
		UIExitToMenuReasonMessage = 0xE4D79B1E,
		UIFirstPartyUIMessage = 0xC40BA0BA,
		UIFlowDialogNodeReachedMessage = 0x501607B4,
		UIGraphExitedMessage = 0xA81FE87F,
		UIHasSuppressedEnemyMessage = 0x6042CDE2,
		UIHideObjectiveMessage = 0xB628267D,
		UIHitIndicatorMessage = 0x5F444786,
		UIHudChangeInventoryWeaponMessage = 0x9CC0B6E5,
		UIHudChatMessage = 0x99E39B35,
		UIHudDebugPauseMessage = 0xA66F3308,
		UIHudDistortHudMessage = 0x577A9231,
		UIHudEnableMinimapMessage = 0x7F2EF175,
		UIHudLastManStandingMessage = 0x547CFACF,
		UIHudOutputStaticMessage = 0x6247360C,
		UIHudResetWinningTeamMessage = 0x608D315D,
		UIHudReviveWeaponEquippedChangedMessage = 0x9CD28E99,
		UIHudShowCaptureProgressMessage = 0x601D3ED1,
		UIHudShowEnemiesMessage = 0x6127F274,
		UIHudShowVoteMenuMessage = 0xE356B0D3,
		UIHudShowVoteResultsMessage = 0x499CCC1A,
		UIHudSquadLevelChangeMessage = 0xD0732D49,
		UIHudTicketBleedMessage = 0x136DFA45,
		UIHudToggleMapZoomMessage = 0xFA6C1752,
		UIHudUpdateCrosshairMessage = 0xF4501856,
		UIHudWarningMessage = 0xD126BAE1,
		UIIOStatusMessage = 0xC274BE40,
		UIInputPressedMessage = 0x7D843182,
		UIInputStatusChangedMessage = 0xEE4AD272,
		UILevelWarmUpTimerMessage = 0x72FCA60F,
		UILoadingProgressHideMessage = 0x875CE489,
		UILoadingProgressShowMessage = 0x8AF3A5AA,
		UIMatchImagesRetrievedMessageBase = 0x4473460A,
		UIMessageEntityMessage = 0x6BEA3962,
		UIMinimapObjectiveEventMessage = 0x400F6AE,
		UINPXTooltipMessage = 0xB45412C1,
		UIObjectiveEventMessage = 0x9D5FBED1,
		UIPVZHideObjectiveMessage = 0x46DF6C81,
		UIPVZMessageEntityMessage = 0x47DE321E,
		UIPVZPlayerStartInteractionMessage = 0xF212D627,
		UIPVZPlayerStopInteractionMessage = 0xEC5F7B5F,
		UIPVZRemoveMessageMessage = 0xF0425FA3,
		UIPVZRoundOverMessage = 0x398E9222,
		UIPVZShowObjectiveMessage = 0x647D4382,
		UIPVZStartReviveInteractionMessage = 0x8D898CF,
		UIPVZStopReviveInteractionMessage = 0xA0785397,
		UIPlayerVehicleHealthChangeMessage = 0xD8EEDF63,
		UIPlayerVehicleListRefreshMessage = 0x7BECF86,
		UIPopupHideMessage = 0x77C7CCF8,
		UIPopupShowMessage = 0x63F4C95B,
		UIPreEndOfRoundReadyMessage = 0x42BB1DA,
		UIReadyForUnloadMessage = 0x485AE09F,
		UIReceivedCustomizationFromBlazeMessage = 0x1CF2D526,
		UIRefreshCustomizationSelectionsMessage = 0x3EA20541,
		UIRequestEndOfRoundMessage = 0xF7BD8927,
		UIRequestMatchImagesMessage = 0x6E540FE4,
		UIRequestPreEndOfRoundMessage = 0x4B4ECE80,
		UIReturnMouseToUIMessage = 0xE5CDDE3E,
		UIScreenActionInputEventMessage = 0x2D85EC9A,
		UIScreenCountChangeMessage = 0x87E2E5BB,
		UIScreenLoadedMessage = 0xC9A3C319,
		UISelectedVisualUnlocksMessage = 0x4CA8948C,
		UISelectedWeaponMessage = 0x4482AE19,
		UIShowMinimapMessage = 0xE44F31AE,
		UIShowObjectiveMessage = 0x8D4D21FE,
		UIShowScoreboardMessage = 0xE986B5C3,
		UISoldierChangeMessage = 0x57E9379E,
		UISoldierHitUpdatedMessage = 0x8C0FF818,
		UISpawnAllowedMessage = 0x55A613D1,
		UISquadStatusChangedMessage = 0x620DFA56,
		UIStreamTagMessageMessage = 0xBA635DF7,
		UISubtitleMessage = 0xC397FB16,
		UITooltipMessage = 0xD5D5A3A7,
		UITrackedAwardChangedMessage = 0xBAE2AF5F,
		UITrackedAwardUpdatedMessage = 0xD2D4CF08,
		UITransitionEffectStartMessage = 0xF2BF49AA,
		UITransitionEffectStopMessage = 0x149A8072,
		UITriggerPopupHideMessage = 0xB47FC640,
		UITriggerPopupShowMessage = 0xFDA01023,
		UIUserConnectedMessage = 0xE3A3CDFC,
		UIUserDisconnectedMessage = 0x2237EBE2,
		UIUserNotificationMessage = 0xD1482E,
		UIUserSkippedLoginMessage = 0x5A2535D0,
		UIVKBDInputDoneMessage = 0xC528735F,
		UIVehicleHitUpdatedMessage = 0x4D16FCCA,

		// Category: UIBundle
		UIBundleLoadedMessage = 0xF9EFD901,
		UIBundleUnloadedMessage = 0x504C0DA,

		// Category: UIComponent
		UIComponentChangeCameraViewPointMessage = 0xE3AAB0C3,
		UIComponentDeferActionMessage = 0xFDF0ED73,
		UIComponentLoadCompleteMessage = 0x917B6992,
		UIComponentOnItemChangedMessage = 0xB37B24B,
		UIComponentSetSettingMessage = 0x3F7DF649,

		// Category: UINetwork
		UINetworkAdminYellMessage = 0x9D10817F,
		UINetworkAllowSkipVideoMessage = 0x19B59E5,
		UINetworkCheckLevelInstalledMessage = 0x4583CD7C,
		UINetworkCoopGameMessage = 0x9D624AF1,
		UINetworkCoopPlayerMessage = 0xD9B3D10C,
		UINetworkDamageMessageBase = 0x95FA38D2,
		UINetworkDamageNoGhostMessageBase = 0x547D4A34,
		UINetworkDisablePreroundMessage = 0x604188FD,
		UINetworkEnableHudMessage = 0x370E1A14,
		UINetworkEndOfRoundBonusMessage = 0x4068662D,
		UINetworkFieldUpgradeScoringMessage = 0xC356313,
		UINetworkHudScoringMessage = 0xE3132EF8,
		UINetworkHudTextMessage = 0xA84D9A8,
		UINetworkHudTooltipMessage = 0x6A213A80,
		UINetworkKilledOtherPlayerMessage = 0x8AFD4678,
		UINetworkMenuResponseMessage = 0xF330A4DC,
		UINetworkOwnPlayerKilledMessage = 0x8B57A7CA,
		UINetworkPVZDebugDeathmatchEndRoundMessage = 0x30C1F363,
		UINetworkPauseVideoMessage = 0xB4FD612F,
		UINetworkPlayVideoMessage = 0xF573FE19,
		UINetworkPlayerCollectibleTextMessage = 0x28A1C6BE,
		UINetworkPlayerConnectMessage = 0xD3A50DC1,
		UINetworkPlayerDeserterTextMessage = 0xA93496A4,
		UINetworkPlayerDisconnectMessage = 0xCDCD179F,
		UINetworkPlayerKillsTextMessage = 0x87B21D93,
		UINetworkPlayerMissionObjectiveTextMessage = 0x2672B521,
		UINetworkPlayerRankUpMessage = 0x4E0014CC,
		UINetworkPlayerTextMessage = 0x2ACD1D02,
		UINetworkPlayerTutorialInstructionsTextMessage = 0x7832D705,
		UINetworkRollCreditsMessage = 0xB937150F,
		UINetworkRoundWarningMessage = 0x2DB3B944,
		UINetworkSetCoopServerLobbyGameTypeMessage = 0xB42C12D4,
		UINetworkShowMessageMessage = 0xCFB0E944,
		UINetworkSkipVideoMessage = 0x83AD5F3C,
		UINetworkSquadWipeInstigatorMessage = 0xA8FB4E53,
		UINetworkSquadWipeMessage = 0x9BF95155,
		UINetworkStealBodyMessage = 0xBA92D53,
		UINetworkStopVideoMessage = 0x26298765,
		UINetworkVideoDoneMessage = 0xC088313D,
		UINetworkVoiceOverSubtitleTextMessage = 0xB10F3B6D,

		// Category: UnlockComponent
		UnlockComponentEnabledMessage = 0x3A67C494,

		// Category: VehicleToComponents
		VehicleToComponentsStartDisabledDamagedMessage = 0xF40666EE,

		// Category: VeniceClientMetrics
		VeniceClientMetricsBootMessage = 0x631D32A4,
		VeniceClientMetricsEnterCriticalHealthMessage = 0x3C8730AD,
		VeniceClientMetricsLeaveCriticalHealthMessage = 0x951AF8DE,
		VeniceClientMetricsQuitSPGameMessage = 0x6F6D7046,
		VeniceClientMetricsRestartSPCheckpointMessage = 0x5E346EAC,
		VeniceClientMetricsRestartSPMissionMessage = 0xEB65178A,
		VeniceClientMetricsResumeSPGameMessage = 0x2965A46,
		VeniceClientMetricsStartSPGameMessage = 0xBDBADCFF,
		VeniceClientMetricsTimeMessage = 0xC93D4807,

		// Category: VeniceClientMetricsListener
		VeniceClientMetricsListenerCreatedMessage = 0x9E4BAE4C,
		VeniceClientMetricsListenerDestroyedMessage = 0x82423A0F,

		// Category: VeniceCommonMetrics
		VeniceCommonMetricsTriggerMessage = 0xFE289BFE,

		// Category: VeniceNetwork
		VeniceNetworkAchievementProgressMessage = 0xE5526ED8,
		VeniceNetworkAchievementUpdateMessage = 0xAE2DDDF4,
		VeniceNetworkAllWeaponKillsMessage = 0x64880730,
		VeniceNetworkAwardGainedMessage = 0x4B794943,
		VeniceNetworkBattlepackGainedMessage = 0xB7A6B451,
		VeniceNetworkBoostUpdateMessage = 0xBBB19C16,
		VeniceNetworkChallengeAwardsStatusMessage = 0x692F9A07,
		VeniceNetworkClientCameraInfoMessageBase = 0xBA6F87B9,
		VeniceNetworkClientIncrementServerCacheBoostMessage = 0xE3402876,
		VeniceNetworkClientLanguageMessage = 0x89A0E49,
		VeniceNetworkCounterStatusMessage = 0x8B960AC2,
		VeniceNetworkCreateSquadMessage = 0x65489BB4,
		VeniceNetworkDebugAwardNextActiveChallengeMessage = 0xBF78169A,
		VeniceNetworkDebugSetPlayerLevelMessage = 0xA72E15F4,
		VeniceNetworkDefibKillMessage = 0x28F221CC,
		VeniceNetworkDogTagMessage = 0x3D31FB7C,
		VeniceNetworkEorStatsMessage = 0x9D3A057B,
		VeniceNetworkFocusPointMessage = 0xC473FB42,
		VeniceNetworkFriendZoneDebugEnableMessage = 0x747FB51E,
		VeniceNetworkFriendZoneMessage = 0x43249C4E,
		VeniceNetworkJoinSquadByOnlineIdMessage = 0x3955B9CB,
		VeniceNetworkJoinSquadMessage = 0x4C032B92,
		VeniceNetworkKickFromSquadMessage = 0x854F79AC,
		VeniceNetworkKitChallengeAwardsStatusMessage = 0xB55951,
		VeniceNetworkLeaveSquadMessage = 0xDE9AB40B,
		VeniceNetworkLocalClientConnectionInfoUpdatedMessageBase = 0xB3D832EE,
		VeniceNetworkMetricsAchievementMessage = 0x8235972,
		VeniceNetworkMissionAwardsStatusMessage = 0x382AE48,
		VeniceNetworkNotifyMicStateMessage = 0xE53E5371,
		VeniceNetworkOnPlayerSelectedTeamMessage = 0xCAD89984,
		VeniceNetworkOrderMessage = 0xB85845AC,
		VeniceNetworkPunkBusterActiveMessage = 0xA6F17F09,
		VeniceNetworkPunkBusterPacketMessageBase = 0x612CCEF8,
		VeniceNetworkRequestAllWeaponKillsMessage = 0xF064F41,
		VeniceNetworkRequestChallengeAwardsStatusMessage = 0x8D1E9B16,
		VeniceNetworkRequestClientLanguageMessage = 0x654CED38,
		VeniceNetworkRequestCoopEorStatsMessage = 0x9399EF59,
		VeniceNetworkRequestCoopPlayerInformationMessage = 0x2C29E97F,
		VeniceNetworkRequestCounterStatusMessage = 0x6C0A1513,
		VeniceNetworkRequestEorStatsMessage = 0x286C84A,
		VeniceNetworkRequestFrontBufferScreenshotMessage = 0x7E7CCEDE,
		VeniceNetworkRequestScreenshotMessage = 0xE633EE7F,
		VeniceNetworkRequestServerInfoMessage = 0x20E48598,
		VeniceNetworkRequestServerStatInfoMessage = 0x7FD98C2A,
		VeniceNetworkSavePersistenceMessage = 0xB5894014,
		VeniceNetworkScoreChangeMessage = 0xAB642AC,
		VeniceNetworkSendTelemetryTokenMessage = 0x37DCB72A,
		VeniceNetworkServerInfoMessage = 0x22804869,
		VeniceNetworkServerStatInfoMessageBase = 0xD9F8EA8E,
		VeniceNetworkSetPingMessage = 0x48551AD0,
		VeniceNetworkSetSquadPrivacyMessage = 0x49A82414,
		VeniceNetworkSetVoiceChannelMessage = 0xB4C25335,
		VeniceNetworkSettingsMessage = 0xEDA40747,
		VeniceNetworkSkipActiveAwardChallengeMessage = 0xA3967EAD,
		VeniceNetworkSpottingMessage = 0xF6A73ACE,
		VeniceNetworkSpottingOverheatMessage = 0x95F4B598,
		VeniceNetworkSuspiciousKeyMessage = 0x80E04D9A,
		VeniceNetworkUnlockAchievementsMessage = 0x6BE017A6,
		VeniceNetworkUnlockGainedMessage = 0x774C21D2,
		VeniceNetworkVirtualGameStateMessage = 0x84F7243A,
		VeniceNetworkVoiceTokenMessage = 0x1C54EDCF,
		VeniceNetworkWeaponAimingMessage = 0xB617E4A5,

		// Category: VeniceServerMetrics
		VeniceServerMetricsCreateLogMessage = 0x4DCB6E4E,
		VeniceServerMetricsFriendZoneSpawnMessage = 0x921E6BB9,
		VeniceServerMetricsLifeCounterMessage = 0xFD138D3C,
		VeniceServerMetricsManDownImmobilizedMessage = 0x419D30D,
		VeniceServerMetricsManDownMessage = 0xB7D187BE,
		VeniceServerMetricsRankupMessage = 0xCC7F3F5D,
		VeniceServerMetricsRestartRoundMessage = 0x3F58F57B,
		VeniceServerMetricsStartRoundMessage = 0xE0696F0C,
		VeniceServerMetricsTicketCounterMessage = 0x4EE8EBFE,

		// Category: Voice
		VoiceChannelMessageBase = 0x7E3EF8E,
		VoiceChannelRequestMessageBase = 0xBB73A21F,
		VoiceChangedMicEnabledMessage = 0x22555F58,
		VoiceSetMuteStatusMessage = 0x49B7987,
		VoiceSetMuteStatusOnlineIdMessage = 0x648DBB45,
		VoiceSetPushToTalkStateMessage = 0x52FC183A,
		VoiceSettingsMessageBase = 0x96AA3888,
		VoiceSettingsRequestMessageBase = 0x904AA3D9,
		VoiceToggleMuteAllMessage = 0x849A63E2,
		VoiceVoipEnabledMessage = 0x73ADB99D,
		VoiceVoipPushToTalkEnabledMessage = 0xCDDD018A,
		VoiceVoipVolumeChangedMessage = 0xE184E9B2,

		// Category: Voip
		VoipInboundTalkersMessage = 0x2224A4AD,

	};
}

