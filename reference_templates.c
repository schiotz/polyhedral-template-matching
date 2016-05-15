
#ifdef __cplusplus
extern "C" {
#endif

//these point sets have barycentre {0, 0, 0} and are scaled such that the mean neighbour distance is 1

const double ptm_template_sc[7][3] = {		{  0.            ,  0.            ,  0.             },
						{  0.            ,  0.            , -1.             },
						{  0.            ,  0.            ,  1.             },
						{  0.            , -1.            ,  0.             },
						{  0.            ,  1.            ,  0.             },
						{ -1.            ,  0.            ,  0.             },
						{  1.            ,  0.            ,  0.             }	};

const double ptm_template_fcc[13][3] = {	{  0.            ,  0.            ,  0.            },
						{  0.            ,  0.707106781187,  0.707106781187 },
						{  0.            , -0.707106781187, -0.707106781187 },
						{  0.            ,  0.707106781187, -0.707106781187 },
						{  0.            , -0.707106781187,  0.707106781187 },
						{  0.707106781187,  0.            ,  0.707106781187 },
						{ -0.707106781187,  0.            , -0.707106781187 },
						{  0.707106781187,  0.            , -0.707106781187 },
						{ -0.707106781187,  0.            ,  0.707106781187 },
						{  0.707106781187,  0.707106781187,  0.             },
						{ -0.707106781187, -0.707106781187,  0.             },
						{  0.707106781187, -0.707106781187,  0.             },
						{ -0.707106781187,  0.707106781187,  0.             }	};

const double ptm_template_hcp[13][3] = {	{  0.            ,  0.            ,  0.            },
						{  0.707106781186,  0.            ,  0.707106781186 },
						{ -0.235702260395, -0.942809041583, -0.235702260395 },
						{  0.707106781186,  0.707106781186,  0.             },
						{ -0.235702260395, -0.235702260395, -0.942809041583 },
						{  0.            ,  0.707106781186,  0.707106781186 },
						{ -0.942809041583, -0.235702260395, -0.235702260395 },
						{ -0.707106781186,  0.707106781186,  0.             },
						{  0.            ,  0.707106781186, -0.707106781186 },
						{  0.707106781186,  0.            , -0.707106781186 },
						{  0.707106781186, -0.707106781186,  0.             },
						{ -0.707106781186,  0.            ,  0.707106781186 },
						{  0.            , -0.707106781186,  0.707106781186 }	};

const double ptm_template_ico[13][3] = {	{  0.            ,  0.            ,  0.            },
						{  0.            ,  0.525731112119,  0.850650808352 },
						{  0.            , -0.525731112119, -0.850650808352 },
						{  0.            ,  0.525731112119, -0.850650808352 },
						{  0.            , -0.525731112119,  0.850650808352 },
						{ -0.525731112119, -0.850650808352,  0.             },
						{  0.525731112119,  0.850650808352,  0.             },
						{  0.525731112119, -0.850650808352,  0.             },
						{ -0.525731112119,  0.850650808352,  0.             },
						{ -0.850650808352,  0.            , -0.525731112119 },
						{  0.850650808352,  0.            ,  0.525731112119 },
						{  0.850650808352,  0.            , -0.525731112119 },
						{ -0.850650808352,  0.            ,  0.525731112119 }	};

const double ptm_template_bcc[15][3] = {	{  0.            ,  0.            ,  0.            },
						{ -0.541451884327, -0.541451884327, -0.541451884327 },
						{  0.541451884327,  0.541451884327,  0.541451884327 },
						{  0.541451884327, -0.541451884327, -0.541451884327 },
						{ -0.541451884327,  0.541451884327,  0.541451884327 },
						{ -0.541451884327,  0.541451884327, -0.541451884327 },
						{  0.541451884327, -0.541451884327,  0.541451884327 },
						{ -0.541451884327, -0.541451884327,  0.541451884327 },
						{  0.541451884327,  0.541451884327, -0.541451884327 },
						{  0.            ,  0.            , -1.082903768655 },
						{  0.            ,  0.            ,  1.082903768655 },
						{  0.            , -1.082903768655,  0.             },
						{  0.            ,  1.082903768655,  0.             },
						{ -1.082903768655,  0.            ,  0.             },
						{  1.082903768655,  0.            ,  0.             }	};

#ifdef __cplusplus
}
#endif
