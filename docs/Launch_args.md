Launch with:

`
-RenderDevice.NullDriverEnable true -Core.HardwareProfile Hardware_Low -Core.HardwareGpuBias -1 -DebrisSystem.Enable false -Client.WorldRenderEnabled false -Client.EmittersEnabled false -Client.TerrainEnabled false -Client.MeshMergingEnabled false -Client.OvergrowthEnabled false -Client.OccludersEnabled true -Decal.SystemEnable false -Render.DebugRendererEnable false -UI.HudEnable false -EmitterSystem.Enable false -Window.Fullscreen false  -Render.NullRendererEnable true -disable-input true -scripted-input true -use-script-input true -disable-client-correction true -disable-client-animations true -Sound.Enable false -disable-entities true -disable-camera true -Texture.LoadingEnabled false -Texture.RenderTexturesEnabled false -Mesh.LoadingEnabled false -ShaderSystem.DatabaseLoadingEnable false -disable-audio-loading true -GameTime.ForceUseSleepTimer true -dedicated true -GameAnimation.ServerEnable true -Server.forcePlaylist false -Server.forceStartMapOnLoad false
`

You can test variations.

Dedicated Server args:

```
-Network.ServerPort Port
-Network.MaxClientCount Number
-Game.Level string
```
