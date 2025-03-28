#pragma once

#ifndef PCH_ENABLED
	#include <QString>
#endif

enum class PixelFormat {
	YUYV,
	UYVY,
	RGB24,
	XRGB,
	I420,
	NV12,
	MJPEG,
	P010,
	NO_CHANGE
};

inline PixelFormat parsePixelFormat(const QString& pixelFormat)
{
	QString format = pixelFormat.toLower();

	if (format.compare("yuyv") == 0)
	{
		return PixelFormat::YUYV;
	}
	else if (format.compare("uyvy") == 0)
	{
		return PixelFormat::UYVY;
	}
	else if (format.compare("rgb24") == 0)
	{
		return PixelFormat::RGB24;
	}
	else if (format.compare("xrgb") == 0)
	{
		return PixelFormat::XRGB;
	}
	else if (format.compare("i420") == 0)
	{
		return PixelFormat::I420;
	}
	else if (format.compare("nv12") == 0)
	{
		return PixelFormat::NV12;
	}
	else if (format.compare("mjpeg") == 0)
	{
		return PixelFormat::MJPEG;
	}
	else if (format.compare("p010") == 0)
	{
		return PixelFormat::P010;
	}

	return PixelFormat::NO_CHANGE;
}

inline QString pixelFormatToString(const PixelFormat& pixelFormat)
{

	if (pixelFormat == PixelFormat::YUYV)
	{
		return "yuyv";
	}
	else if (pixelFormat == PixelFormat::UYVY)
	{
		return "uyvy";
	}
	else if (pixelFormat == PixelFormat::RGB24)
	{
		return "rgb24";
	}
	else if (pixelFormat == PixelFormat::XRGB)
	{
		return "xrgb";
	}
	else if (pixelFormat == PixelFormat::I420)
	{
		return "i420";
	}
	else if (pixelFormat == PixelFormat::NV12)
	{
		return "nv12";
	}
	else if (pixelFormat == PixelFormat::MJPEG)
	{
		return "mjpeg";
	}
	else if (pixelFormat == PixelFormat::P010)
	{
		return "p010";
	}

	return "NO_CHANGE";
}
