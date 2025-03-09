///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>
#include <fb/PointEnvelopePoint.h>

namespace fb {
	class PointEnvelope : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PointEnvelope"); }
		virtual ~PointEnvelope() override {}
		PointEnvelope() {
		};

		Array<PointEnvelopePoint> m_points; // 0x10 (16)
	}; // 0x18 (24)
}

