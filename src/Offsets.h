//Offsets by Silkker

//DEDI SERVER
Main::Init => 0x14000B070
Main::SpawnServer => 0x140011AE0
GameLoopInfo::Init => 0x14000AFB0

BFSERVERSETTINGS => 0x1421EFE10 // Not sure about this
BFDedicatedServerSettings => 0x141C472E8 // Not sure about this

//MULTI PURPOSE
//GameTimeSettings => 141726fe0 (I don't know how to get offsets)
ServerPlayer::SetTeamId => 0x140767A60
EnginePeer::Init => 0x1408038F0
LevelSetup::LevelSetup => 0x141464B10
LevelSetup::SetInclusionOption => 0x1404FA7F0
ServerConnection::KickPlayer => 0x1407056D0
ServerPlayerManager::CreatePlayer => 0x14075CDC0
SettingsManager::GetSettingsObject => 0x1403BCEA0

//CLIENT
Client::ConnectToAddress => 0x140559CD0
Client::StateChange => 0x14053F180

//FOR DEBUGGING
MessaageManager::DispatchMessage => 0x14035AD00
OnlineManager::OnGotDisconnected => 0x14055D3B0

//Offsets to find (Not sure if all of these exist)

APPLY_SETTINGS => ? //Closest thing: "ApplySettingOnCreation" => 14168b748

CLIENT_STATE_CHANGE => ? //Closest thing: "ClientStateChangingStateMessage" => 1416b5020
CLIENT_INIT_NETWORK => ? //Closest thing: "Network" => 141578778

GET_CLIENT_INSTANCE => ? //Closest thing: "GetClientRect" => 141bc9ece
GET_SETTINGS_OBJECT => ? //Closest thing: "GetSetting" => 1418ae428

SERVER_START => ? //Closest thing: "ServerStartPointEntity" => 14170a7d0
SERVER_CONSTRUCTOR => ? //Closest thing: => 
SERVER_PATCH => ? //Closest thing: => 
SERVER_PATCH2 => ? //Closest thing: => 
SERVERPLAYERMANAGER => ? //Closest thing: "ServerPlayerManager" => 14170eb80 
SERVERGAMECONTEXT_INSTANCE => ? //Closest thing: => 

GLOBAL_CLIENT => ? //Closest thing: => "Client" => 1415ad418
GLOBAL_SETTINGS_MANAGER => ? //Closest thing: "SettingsManager" => 141674b38
EXECUTIONCONTEXT_GETNATIVEDATAPATH => ? //Closest thing: "dataPath" => 1416725f0
