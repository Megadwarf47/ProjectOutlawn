///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class GlobalNode;
	class UIAudioEventAsset;
	class UIEventAsset;
	class UINodeConnection;
	class UINodeData;
}

namespace fb {
	class UIGraphAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIGraphAsset"); }
		virtual ~UIGraphAsset() override {}
		UIGraphAsset() {
			m_protectScreens = false;
			m_modal = false;
			m_isWin32UIGraphAsset = true;
			m_isXenonUIGraphAsset = true;
			m_isPs3UIGraphAsset = true;
			m_isGen4aUIGraphAsset = true;
			m_isGen4bUIGraphAsset = true;
		};

		RefArray<UINodeData> m_nodes; // 0x18 (24)
		CtrRef<GlobalNode> m_globalNode; // 0x20 (32)
		RefArray<UINodeConnection> m_connections; // 0x28 (40)
		CtrRef<UIAudioEventAsset> m_audioEventMappings; // 0x30 (48)
		String m_bundleAssetName; // 0x38 (56)
		RefArray<UIEventAsset> m_eventList; // 0x40 (64)
		bool m_protectScreens; // 0x48 (72)
		bool m_modal; // 0x49 (73)
		bool m_isWin32UIGraphAsset; // 0x4A (74)
		bool m_isXenonUIGraphAsset; // 0x4B (75)
		bool m_isPs3UIGraphAsset; // 0x4C (76)
		bool m_isGen4aUIGraphAsset; // 0x4D (77)
		bool m_isGen4bUIGraphAsset; // 0x4E (78)
	}; // 0x50 (80)
}

