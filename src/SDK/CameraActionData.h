///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CameraMovementActionMode.h>
#include <fb/SimpleMovementActionBaseData.h>

namespace fb {
	class CameraActionData : public SimpleMovementActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CameraActionData"); }
		virtual ~CameraActionData() override {}
		CameraActionData() {
			m_actionMode = CameraMovementActionMode::CameraMovementActionMode_Start;
		};

		CameraMovementActionMode m_actionMode; // 0x20 (32)
	}; // 0x28 (40)
}

