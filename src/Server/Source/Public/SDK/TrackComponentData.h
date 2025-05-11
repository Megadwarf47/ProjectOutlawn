///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MeshComponentData.h>

namespace fb {
	class TrackComponentData : public MeshComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TrackComponentData"); }
		virtual ~TrackComponentData() override {}
		TrackComponentData() {
			m_scrollFactor = 0.085f;
		};

		float m_scrollFactor; // 0x90 (144)
	}; // 0xA0 (160)
}

