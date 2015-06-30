/* This code is AUTOGENERATED!!! */

#include "state.h"
#include "state_internals.h"

void crStateBufferDiff(CRBufferBits *b, CRbitvalue *bitID,
		CRContext *fromCtx, CRContext *toCtx)
{
	CRBufferState *from = &(fromCtx->buffer);
	CRBufferState *to = &(toCtx->buffer);
	unsigned int j, i;
	CRbitvalue nbitID[CR_MAX_BITARRAY];
	for (j=0;j<CR_MAX_BITARRAY;j++)
		nbitID[j] = ~bitID[j];
	i = 0; /* silence compiler */
	if (CHECKDIRTY(b->enable, bitID))
	{
		glAble able[2];
		able[0] = diff_api.Disable;
		able[1] = diff_api.Enable;
		if (from->depthTest != to->depthTest)
		{
			able[to->depthTest](GL_DEPTH_TEST);
			from->depthTest = to->depthTest;
		}
		if (from->blend != to->blend)
		{
			able[to->blend](GL_BLEND);
			from->blend = to->blend;
		}
		if (from->alphaTest != to->alphaTest)
		{
			able[to->alphaTest](GL_ALPHA_TEST);
			from->alphaTest = to->alphaTest;
		}
		if (from->logicOp != to->logicOp)
		{
			able[to->logicOp](GL_COLOR_LOGIC_OP);
			from->logicOp = to->logicOp;
		}
		if (from->indexLogicOp != to->indexLogicOp)
		{
			able[to->indexLogicOp](GL_INDEX_LOGIC_OP);
			from->indexLogicOp = to->indexLogicOp;
		}
		if (from->dither != to->dither)
		{
			able[to->dither](GL_DITHER);
			from->dither = to->dither;
		}
		CLEARDIRTY(b->enable, nbitID);
	}
	if (CHECKDIRTY(b->alphaFunc, bitID))
	{
		if (from->alphaTestFunc != to->alphaTestFunc ||
		    from->alphaTestRef != to->alphaTestRef)
		{
			diff_api.AlphaFunc (to->alphaTestFunc,
			    to->alphaTestRef);
			from->alphaTestFunc = to->alphaTestFunc;
			from->alphaTestRef = to->alphaTestRef;
		}
		CLEARDIRTY(b->alphaFunc, nbitID);
	}
	if (CHECKDIRTY(b->depthFunc, bitID))
	{
		if (from->depthFunc != to->depthFunc)
		{
			diff_api.DepthFunc (to->depthFunc);
			from->depthFunc = to->depthFunc;
		}
		CLEARDIRTY(b->depthFunc, nbitID);
	}
	if (CHECKDIRTY(b->blendFunc, bitID))
	{
		if (from->blendSrcRGB != to->blendSrcRGB ||
		    from->blendDstRGB != to->blendDstRGB)
		{
			diff_api.BlendFunc (to->blendSrcRGB,
			    to->blendDstRGB);
			from->blendSrcRGB = to->blendSrcRGB;
			from->blendDstRGB = to->blendDstRGB;
		}
		CLEARDIRTY(b->blendFunc, nbitID);
	}
	if (CHECKDIRTY(b->blendFuncSeparate, bitID))
	{
		if (from->blendSrcRGB != to->blendSrcRGB ||
		    from->blendDstRGB != to->blendDstRGB ||
		    from->blendSrcA != to->blendSrcA ||
		    from->blendDstA != to->blendDstA)
		{
			diff_api.BlendFuncSeparateEXT (to->blendSrcRGB,
			    to->blendDstRGB,
			    to->blendSrcA,
			    to->blendDstA);
			from->blendSrcRGB = to->blendSrcRGB;
			from->blendDstRGB = to->blendDstRGB;
			from->blendSrcA = to->blendSrcA;
			from->blendDstA = to->blendDstA;
		}
		CLEARDIRTY(b->blendFuncSeparate, nbitID);
	}
	if (CHECKDIRTY(b->logicOp, bitID))
	{
		if (from->logicOpMode != to->logicOpMode)
		{
			diff_api.LogicOp (to->logicOpMode);
			from->logicOpMode = to->logicOpMode;
		}
		CLEARDIRTY(b->logicOp, nbitID);
	}
	if (CHECKDIRTY(b->indexLogicOp, bitID))
	{
		if (from->logicOpMode != to->logicOpMode)
		{
			diff_api.LogicOp (to->logicOpMode);
			from->logicOpMode = to->logicOpMode;
		}
		CLEARDIRTY(b->indexLogicOp, nbitID);
	}
	if (CHECKDIRTY(b->drawBuffer, bitID))
	{
		if (from->drawBuffer != to->drawBuffer)
		{
			diff_api.DrawBuffer (to->drawBuffer);
			from->drawBuffer = to->drawBuffer;
		}
		CLEARDIRTY(b->drawBuffer, nbitID);
	}
	if (CHECKDIRTY(b->readBuffer, bitID))
	{
		if (from->readBuffer != to->readBuffer)
		{
			diff_api.ReadBuffer (to->readBuffer);
			from->readBuffer = to->readBuffer;
		}
		CLEARDIRTY(b->readBuffer, nbitID);
	}
	if (CHECKDIRTY(b->indexMask, bitID))
	{
		if (from->indexWriteMask != to->indexWriteMask)
		{
			diff_api.IndexMask (to->indexWriteMask);
			from->indexWriteMask = to->indexWriteMask;
		}
		CLEARDIRTY(b->indexMask, nbitID);
	}
	if (CHECKDIRTY(b->colorWriteMask, bitID))
	{
		if (from->colorWriteMask.r != to->colorWriteMask.r ||
		    from->colorWriteMask.g != to->colorWriteMask.g ||
		    from->colorWriteMask.b != to->colorWriteMask.b ||
		    from->colorWriteMask.a != to->colorWriteMask.a)
		{
			diff_api.ColorMask (to->colorWriteMask.r,
			    to->colorWriteMask.g,
			    to->colorWriteMask.b,
			    to->colorWriteMask.a);
			from->colorWriteMask = to->colorWriteMask;
		}
		CLEARDIRTY(b->colorWriteMask, nbitID);
	}
	if (CHECKDIRTY(b->clearColor, bitID))
	{
		if (from->colorClearValue.r != to->colorClearValue.r ||
		    from->colorClearValue.g != to->colorClearValue.g ||
		    from->colorClearValue.b != to->colorClearValue.b ||
		    from->colorClearValue.a != to->colorClearValue.a)
		{
			diff_api.ClearColor (to->colorClearValue.r,
			    to->colorClearValue.g,
			    to->colorClearValue.b,
			    to->colorClearValue.a);
			from->colorClearValue = to->colorClearValue;
		}
		CLEARDIRTY(b->clearColor, nbitID);
	}
	if (CHECKDIRTY(b->clearIndex, bitID))
	{
		if (from->indexClearValue != to->indexClearValue)
		{
			diff_api.ClearIndex (to->indexClearValue);
			from->indexClearValue = to->indexClearValue;
		}
		CLEARDIRTY(b->clearIndex, nbitID);
	}
	if (CHECKDIRTY(b->clearDepth, bitID))
	{
		if (from->depthClearValue != to->depthClearValue)
		{
			diff_api.ClearDepth (to->depthClearValue);
			from->depthClearValue = to->depthClearValue;
		}
		CLEARDIRTY(b->clearDepth, nbitID);
	}
	if (CHECKDIRTY(b->clearAccum, bitID))
	{
		if (from->accumClearValue.r != to->accumClearValue.r ||
		    from->accumClearValue.g != to->accumClearValue.g ||
		    from->accumClearValue.b != to->accumClearValue.b ||
		    from->accumClearValue.a != to->accumClearValue.a)
		{
			diff_api.ClearAccum (to->accumClearValue.r,
			    to->accumClearValue.g,
			    to->accumClearValue.b,
			    to->accumClearValue.a);
			from->accumClearValue = to->accumClearValue;
		}
		CLEARDIRTY(b->clearAccum, nbitID);
	}
	if (CHECKDIRTY(b->depthMask, bitID))
	{
		if (from->depthMask != to->depthMask)
		{
			diff_api.DepthMask (to->depthMask);
			from->depthMask = to->depthMask;
		}
		CLEARDIRTY(b->depthMask, nbitID);
	}
	if (CHECKDIRTY(b->blendEquation, bitID))
	{
		if (from->blendEquation != to->blendEquation)
		{
			diff_api.BlendEquationEXT (to->blendEquation);
			from->blendEquation = to->blendEquation;
		}
		CLEARDIRTY(b->blendEquation, nbitID);
	}
	if (CHECKDIRTY(b->blendColor, bitID))
	{
		if (from->blendColor.r != to->blendColor.r ||
		    from->blendColor.g != to->blendColor.g ||
		    from->blendColor.b != to->blendColor.b ||
		    from->blendColor.a != to->blendColor.a)
		{
			diff_api.BlendColorEXT (to->blendColor.r,
			    to->blendColor.g,
			    to->blendColor.b,
			    to->blendColor.a);
			from->blendColor = to->blendColor;
		}
		CLEARDIRTY(b->blendColor, nbitID);
	}
	CLEARDIRTY(b->dirty, nbitID);
}

void crStateBufferSwitch(CRBufferBits *b, CRbitvalue *bitID,
		CRContext *fromCtx, CRContext *toCtx)
{
	CRBufferState *from = &(fromCtx->buffer);
	CRBufferState *to = &(toCtx->buffer);
	unsigned int j, i;
	CRbitvalue nbitID[CR_MAX_BITARRAY];
	for (j=0;j<CR_MAX_BITARRAY;j++)
		nbitID[j] = ~bitID[j];
	i = 0; /* silence compiler */
	if (CHECKDIRTY(b->enable, bitID))
	{
		glAble able[2];
		able[0] = diff_api.Disable;
		able[1] = diff_api.Enable;
		if (from->depthTest != to->depthTest)
		{
			able[to->depthTest](GL_DEPTH_TEST);
			FILLDIRTY(b->enable);
			FILLDIRTY(b->dirty);
		}
		if (from->blend != to->blend)
		{
			able[to->blend](GL_BLEND);
			FILLDIRTY(b->enable);
			FILLDIRTY(b->dirty);
		}
		if (from->alphaTest != to->alphaTest)
		{
			able[to->alphaTest](GL_ALPHA_TEST);
			FILLDIRTY(b->enable);
			FILLDIRTY(b->dirty);
		}
		if (from->logicOp != to->logicOp)
		{
			able[to->logicOp](GL_COLOR_LOGIC_OP);
			FILLDIRTY(b->enable);
			FILLDIRTY(b->dirty);
		}
		if (from->indexLogicOp != to->indexLogicOp)
		{
			able[to->indexLogicOp](GL_INDEX_LOGIC_OP);
			FILLDIRTY(b->enable);
			FILLDIRTY(b->dirty);
		}
		if (from->dither != to->dither)
		{
			able[to->dither](GL_DITHER);
			FILLDIRTY(b->enable);
			FILLDIRTY(b->dirty);
		}
		CLEARDIRTY(b->enable, nbitID);
	}
	if (CHECKDIRTY(b->alphaFunc, bitID))
	{
		if (from->alphaTestFunc != to->alphaTestFunc ||
		    from->alphaTestRef != to->alphaTestRef)
		{
			diff_api.AlphaFunc (to->alphaTestFunc,
			    to->alphaTestRef);
			FILLDIRTY(b->alphaFunc);
			FILLDIRTY(b->dirty);
		}
		CLEARDIRTY(b->alphaFunc, nbitID);
	}
	if (CHECKDIRTY(b->depthFunc, bitID))
	{
		if (from->depthFunc != to->depthFunc)
		{
			diff_api.DepthFunc (to->depthFunc);
			FILLDIRTY(b->depthFunc);
			FILLDIRTY(b->dirty);
		}
		CLEARDIRTY(b->depthFunc, nbitID);
	}
	if (CHECKDIRTY(b->blendFunc, bitID))
	{
		if (from->blendSrcRGB != to->blendSrcRGB ||
		    from->blendDstRGB != to->blendDstRGB)
		{
			diff_api.BlendFunc (to->blendSrcRGB,
			    to->blendDstRGB);
			FILLDIRTY(b->blendFunc);
			FILLDIRTY(b->dirty);
		}
		CLEARDIRTY(b->blendFunc, nbitID);
	}
	if (CHECKDIRTY(b->blendFuncSeparate, bitID))
	{
		if (from->blendSrcRGB != to->blendSrcRGB ||
		    from->blendDstRGB != to->blendDstRGB ||
		    from->blendSrcA != to->blendSrcA ||
		    from->blendDstA != to->blendDstA)
		{
			diff_api.BlendFuncSeparateEXT (to->blendSrcRGB,
			    to->blendDstRGB,
			    to->blendSrcA,
			    to->blendDstA);
			FILLDIRTY(b->blendFuncSeparate);
			FILLDIRTY(b->dirty);
		}
		CLEARDIRTY(b->blendFuncSeparate, nbitID);
	}
	if (CHECKDIRTY(b->logicOp, bitID))
	{
		if (from->logicOpMode != to->logicOpMode)
		{
			diff_api.LogicOp (to->logicOpMode);
			FILLDIRTY(b->logicOp);
			FILLDIRTY(b->dirty);
		}
		CLEARDIRTY(b->logicOp, nbitID);
	}
	if (CHECKDIRTY(b->indexLogicOp, bitID))
	{
		if (from->logicOpMode != to->logicOpMode)
		{
			diff_api.LogicOp (to->logicOpMode);
			FILLDIRTY(b->indexLogicOp);
			FILLDIRTY(b->dirty);
		}
		CLEARDIRTY(b->indexLogicOp, nbitID);
	}
	if (CHECKDIRTY(b->drawBuffer, bitID))
	{
		if (from->drawBuffer != to->drawBuffer)
		{
			diff_api.DrawBuffer (to->drawBuffer);
			FILLDIRTY(b->drawBuffer);
			FILLDIRTY(b->dirty);
		}
		CLEARDIRTY(b->drawBuffer, nbitID);
	}
	if (CHECKDIRTY(b->readBuffer, bitID))
	{
		if (from->readBuffer != to->readBuffer)
		{
			diff_api.ReadBuffer (to->readBuffer);
			FILLDIRTY(b->readBuffer);
			FILLDIRTY(b->dirty);
		}
		CLEARDIRTY(b->readBuffer, nbitID);
	}
	if (CHECKDIRTY(b->indexMask, bitID))
	{
		if (from->indexWriteMask != to->indexWriteMask)
		{
			diff_api.IndexMask (to->indexWriteMask);
			FILLDIRTY(b->indexMask);
			FILLDIRTY(b->dirty);
		}
		CLEARDIRTY(b->indexMask, nbitID);
	}
	if (CHECKDIRTY(b->colorWriteMask, bitID))
	{
		if (from->colorWriteMask.r != to->colorWriteMask.r ||
		    from->colorWriteMask.g != to->colorWriteMask.g ||
		    from->colorWriteMask.b != to->colorWriteMask.b ||
		    from->colorWriteMask.a != to->colorWriteMask.a)
		{
			diff_api.ColorMask (to->colorWriteMask.r,
			    to->colorWriteMask.g,
			    to->colorWriteMask.b,
			    to->colorWriteMask.a);
			FILLDIRTY(b->colorWriteMask);
			FILLDIRTY(b->dirty);
		}
		CLEARDIRTY(b->colorWriteMask, nbitID);
	}
	if (CHECKDIRTY(b->clearColor, bitID))
	{
		if (from->colorClearValue.r != to->colorClearValue.r ||
		    from->colorClearValue.g != to->colorClearValue.g ||
		    from->colorClearValue.b != to->colorClearValue.b ||
		    from->colorClearValue.a != to->colorClearValue.a)
		{
			diff_api.ClearColor (to->colorClearValue.r,
			    to->colorClearValue.g,
			    to->colorClearValue.b,
			    to->colorClearValue.a);
			FILLDIRTY(b->clearColor);
			FILLDIRTY(b->dirty);
		}
		CLEARDIRTY(b->clearColor, nbitID);
	}
	if (CHECKDIRTY(b->clearIndex, bitID))
	{
		if (from->indexClearValue != to->indexClearValue)
		{
			diff_api.ClearIndex (to->indexClearValue);
			FILLDIRTY(b->clearIndex);
			FILLDIRTY(b->dirty);
		}
		CLEARDIRTY(b->clearIndex, nbitID);
	}
	if (CHECKDIRTY(b->clearDepth, bitID))
	{
		if (from->depthClearValue != to->depthClearValue)
		{
			diff_api.ClearDepth (to->depthClearValue);
			FILLDIRTY(b->clearDepth);
			FILLDIRTY(b->dirty);
		}
		CLEARDIRTY(b->clearDepth, nbitID);
	}
	if (CHECKDIRTY(b->clearAccum, bitID))
	{
		if (from->accumClearValue.r != to->accumClearValue.r ||
		    from->accumClearValue.g != to->accumClearValue.g ||
		    from->accumClearValue.b != to->accumClearValue.b ||
		    from->accumClearValue.a != to->accumClearValue.a)
		{
			diff_api.ClearAccum (to->accumClearValue.r,
			    to->accumClearValue.g,
			    to->accumClearValue.b,
			    to->accumClearValue.a);
			FILLDIRTY(b->clearAccum);
			FILLDIRTY(b->dirty);
		}
		CLEARDIRTY(b->clearAccum, nbitID);
	}
	if (CHECKDIRTY(b->depthMask, bitID))
	{
		if (from->depthMask != to->depthMask)
		{
			diff_api.DepthMask (to->depthMask);
			FILLDIRTY(b->depthMask);
			FILLDIRTY(b->dirty);
		}
		CLEARDIRTY(b->depthMask, nbitID);
	}
	if (CHECKDIRTY(b->blendEquation, bitID))
	{
		if (from->blendEquation != to->blendEquation)
		{
			diff_api.BlendEquationEXT (to->blendEquation);
			FILLDIRTY(b->blendEquation);
			FILLDIRTY(b->dirty);
		}
		CLEARDIRTY(b->blendEquation, nbitID);
	}
	if (CHECKDIRTY(b->blendColor, bitID))
	{
		if (from->blendColor.r != to->blendColor.r ||
		    from->blendColor.g != to->blendColor.g ||
		    from->blendColor.b != to->blendColor.b ||
		    from->blendColor.a != to->blendColor.a)
		{
			diff_api.BlendColorEXT (to->blendColor.r,
			    to->blendColor.g,
			    to->blendColor.b,
			    to->blendColor.a);
			FILLDIRTY(b->blendColor);
			FILLDIRTY(b->dirty);
		}
		CLEARDIRTY(b->blendColor, nbitID);
	}
	CLEARDIRTY(b->dirty, nbitID);
}
