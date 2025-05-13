///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/UINodeData.h>
#include <fb/UISimpleDataSource.h>

namespace fb {
	class UINodePort;
}

namespace fb {
	class DataStepNode : public UINodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DataStepNode"); }
		virtual ~DataStepNode() override {}
		DataStepNode() {
		};

		CtrRef<UINodePort> m_in; // 0x28 (40)
		CtrRef<UINodePort> m_out; // 0x30 (48)
		Array<float> m_steps; // 0x38 (56)
		UISimpleDataSource m_currentStepDataSource; // 0x40 (64)
		UISimpleDataSource m_dataSource; // 0x50 (80)
	}; // 0x60 (96)
}

