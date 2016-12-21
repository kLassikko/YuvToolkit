#ifndef FFMPEG_FORMATS_H
#define FFMPEG_FORMATS_H

AVPixelFormat YT2FFMpegFormat(COLOR_FORMAT format)
{
	switch (format)
	{
	case RGB24:
		return AV_PIX_FMT_BGR24; // On little endian machines, #00RRGGBB is stored as #BBGGRR since B is least significant number
	case RGBX32:
		return AV_PIX_FMT_RGB32_1;
	case XRGB32:
		return AV_PIX_FMT_RGB32;
	case Y800:
		return AV_PIX_FMT_GRAY8;
	case BGR24:
		return AV_PIX_FMT_RGB24;
	case BGRX32:
		return AV_PIX_FMT_BGR32_1;
	case XBGR32:
		return AV_PIX_FMT_BGR32;
	case RGB565:
		return AV_PIX_FMT_RGB565;
	case BGR565:
		return AV_PIX_FMT_BGR565;
	case I444:
	case YV24:
		return AV_PIX_FMT_YUV444P;
	case I422:
	case YV16:
		return AV_PIX_FMT_YUV422P;
	case I420:
	case IYUV:
	case YV12:
	case IMC2:
	case IMC4:
		return AV_PIX_FMT_YUV420P;
	case YUY2:
	case YUYV:
		return AV_PIX_FMT_YUYV422;
	case UYVY:
		return AV_PIX_FMT_UYVY422;
	case YVYU:
		return AV_PIX_FMT_YUYV422;
	case NV12:
		return AV_PIX_FMT_NV12;
	default:
		return AV_PIX_FMT_NONE;
	}
}

COLOR_FORMAT FFMpeg2YTFormat(AVPixelFormat ffmpeg_format)
{
	switch (ffmpeg_format)
	{
	case AV_PIX_FMT_RGB24:
		return BGR24;
	case AV_PIX_FMT_RGB32_1:
		return RGBX32;
	case AV_PIX_FMT_RGB32:
		return XRGB32;
	case AV_PIX_FMT_GRAY8:
		return Y800;
	case AV_PIX_FMT_YUV420P:
		return I420;
	case AV_PIX_FMT_YUV444P:
		return I444;
	case AV_PIX_FMT_YUV422P:
		return I422;
	case AV_PIX_FMT_YUYV422:
		return YUY2;
	case AV_PIX_FMT_UYVY422:
		return UYVY;
	case AV_PIX_FMT_NV12:
		return NV12;
	case AV_PIX_FMT_BGR24:
		return RGB24;
	case AV_PIX_FMT_BGR32_1:
		return BGRX32;
	case AV_PIX_FMT_BGR32:
		return XBGR32;
	case AV_PIX_FMT_RGB565:
		return RGB565;
	case AV_PIX_FMT_BGR565:
		return BGR565;
	default:
		return NODATA;
	}
}

#endif
