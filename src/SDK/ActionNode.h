///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/UINodeData.h>

namespace fb {
	class Asset;
	class UINodePort;
}

namespace fb {
	class ActionNode : public UINodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ActionNode"); }
		virtual ~ActionNode() override {}
		ActionNode() {
			m_actionKey = 0;
			m_appendIncomingParams = false;
		};

		s32 m_actionKey; // 0x28 (40)
		Array<String> m_params; // 0x30 (48)
		CtrRef<Asset> m_actionAsset; // 0x38 (56)
		CtrRef<UINodePort> m_in; // 0x40 (64)
		RefArray<UINodePort> m_dataInputs; // 0x48 (72)
		CtrRef<UINodePort> m_out; // 0x50 (80)
		bool m_appendIncomingParams; // 0x58 (88)
	}; // 0x60 (96)
}

