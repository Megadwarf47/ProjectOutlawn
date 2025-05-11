///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UINodeData.h>
#include <fb/UISimpleDataSource.h>

namespace fb {
	class UINodePort;
}

namespace fb {
	class RefreshNode : public UINodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RefreshNode"); }
		virtual ~RefreshNode() override {}
		RefreshNode() {
		};

		CtrRef<UINodePort> m_in; // 0x28 (40)
		CtrRef<UINodePort> m_out; // 0x30 (48)
		UISimpleDataSource m_dataSource; // 0x38 (56)
	}; // 0x48 (72)
}

