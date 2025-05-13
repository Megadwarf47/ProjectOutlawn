///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class RenderFramesKeyframe : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RenderFramesKeyframe"); }
		virtual ~RenderFramesKeyframe() override {}
		RenderFramesKeyframe() {
			m_time = 0.f;
			m_length = 0.f;
		};

		float m_time; // 0x10 (16)
		float m_length; // 0x14 (20)
		String m_renderFileName; // 0x18 (24)
	}; // 0x20 (32)
}

