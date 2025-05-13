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
	class BinaryLogicNode : public UINodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BinaryLogicNode"); }
		virtual ~BinaryLogicNode() override {}
		BinaryLogicNode() {
		};

		CtrRef<UINodePort> m_in; // 0x28 (40)
		CtrRef<UINodePort> m_true; // 0x30 (48)
		CtrRef<UINodePort> m_false; // 0x38 (56)
		UISimpleDataSource m_dataSourceInfo; // 0x40 (64)
	}; // 0x50 (80)
}

