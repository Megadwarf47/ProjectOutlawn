///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RadarScanActionData.h>

namespace fb {
	class VehicleScanActionData : public RadarScanActionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VehicleScanActionData"); }
		virtual ~VehicleScanActionData() override {}
		VehicleScanActionData() {
			m_actionType = CommanderActionType::CommanderActionType_VehicleScan;
		};

	}; // 0x38 (56)
}

