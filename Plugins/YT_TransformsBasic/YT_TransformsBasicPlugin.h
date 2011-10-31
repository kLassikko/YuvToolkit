#ifndef TRANSFORMSBASIC_PLUGIN_H
#define TRANSFORMSBASIC_PLUGIN_H

#include "../YT_Interface.h"

enum TRANSFORM_ID
{
	TRANSFORM_SHOW_PLANE,
	TRANSFORM_PSNR,
	TRANSFORM_MSE,
	TRANSFORM_SSIM,
};

class TransformsBasicPlugin : public QObject, public YTPlugIn
{
	Q_OBJECT;
	Q_INTERFACES(YTPlugIn);
public:
	virtual RESULT Init(Host*);

	virtual Transform* NewTransform(const QString& name);
	virtual void ReleaseTransform(Transform*);
};

#endif // TRANSFORMSBASIC_PLUGIN_H
