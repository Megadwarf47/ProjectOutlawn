//Offsets by Silkker

//DEDI SERVER
0x14000B070 => Main::Init
0x140011AE0 => Main::SpawnServer
0x14000AFB0 => GameLoopInfo::Init

0x1421EFE10 => BFSERVERSETTINGS // Not sure about this
0x141C472E8 => BFDedicatedServerSettings // Not sure about this

//MULTI PURPOSE
0x140767A60 => ServerPlayer::SetTeamId
0x1408038F0 => EnginePeer::Init
0x141464B10 => LevelSetup::LevelSetup
0x1404FA7F0 => LevelSetup::SetInclusionOption
0x1407056D0 => ServerConnection::KickPlayer
0x14075CDC0 => ServerPlayerManager::CreatePlayer
0x1403BCEA0 => SettingsManager::GetSettingsObject

//CLIENT
0x140559CD0 => Client::ConnectToAddress
0x14053F180 => Client::StateChange

//FOR DEBUGGING
0x14035AD00 => MessaageManager::DispatchMessage
0x14055D3B0 => OnlineManager::OnGotDisconnected


//Offsets to find (Not sure if all of these exist)

? => APPLY_SETTINGS
  
? => CLIENT_STATE_CHANGE
? => CLIENT_INIT_NETWORK
? => CLIENT_CONNECTTOADDRESS

? => GET_CLIENT_INSTANCE
? => GET_SETTINGS_OBJECT

? => SERVER_START
? => SERVER_CONSTRUCTOR
? => SERVER_PATCH
? => SERVER_PATCH2
? => SERVERPLAYERMANAGER
? => SERVERGAMECONTEXT_INSTANCE

? => GLOBAL_CLIENT
? => GLOBAL_SETTINGS_MANAGER
? => EXECUTIONCONTEXT_GETNATIVEDATAPATH
