///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UINodeData.h>

namespace fb {
	class UINodePort;
}

namespace fb {
	class InstanceOutputNode : public UINodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InstanceOutputNode"); }
		virtual ~InstanceOutputNode() override {}
		InstanceOutputNode() {
			m_id = 0;
			m_destroyGraph = true;
		};

		CtrRef<UINodePort> m_in; // 0x28 (40)
		s32 m_id; // 0x30 (48)
		bool m_destroyGraph; // 0x34 (52)
	}; // 0x38 (56)
}

