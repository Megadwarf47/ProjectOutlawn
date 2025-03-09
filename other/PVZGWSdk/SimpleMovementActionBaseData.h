///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MovementActionData.h>
#include <fb/SimpleMovementActionTimeData.h>

namespace fb {
	class SimpleMovementActionBaseData : public MovementActionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SimpleMovementActionBaseData"); }
		virtual ~SimpleMovementActionBaseData() override {}
		SimpleMovementActionBaseData() {
		};

		SimpleMovementActionTimeData m_startTimeInfo; // 0x10 (16)
		SimpleMovementActionTimeData m_runTimeInfo; // 0x18 (24)
	}; // 0x20 (32)
}

