///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LocationSelection.h>
#include <fb/ProcessorData.h>

namespace fb {
	class UpdateBeamSourceData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UpdateBeamSourceData"); }
		virtual ~UpdateBeamSourceData() override {}
		UpdateBeamSourceData() {
			m_source = LocationSelection::LsEmitter;
		};

		LocationSelection m_source; // 0x28 (40)
	}; // 0x30 (48)
}

