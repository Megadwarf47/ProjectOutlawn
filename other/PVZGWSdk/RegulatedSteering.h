///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/PID.h>

namespace fb {
	class RegulatedSteering : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RegulatedSteering"); }
		virtual ~RegulatedSteering() override {}
		RegulatedSteering() {
		};

		PID m_pid; // 0x10 (16)
	}; // 0x30 (48)
}

