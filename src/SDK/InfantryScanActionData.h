///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RadarScanActionData.h>

namespace fb {
	class InfantryScanActionData : public RadarScanActionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InfantryScanActionData"); }
		virtual ~InfantryScanActionData() override {}
		InfantryScanActionData() {
			m_actionType = CommanderActionType::CommanderActionType_InfantryScan;
		};

	}; // 0x38 (56)
}

