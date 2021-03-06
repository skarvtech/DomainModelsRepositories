//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Service Robotics Research Center
// University of Applied Sciences Ulm
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// www.servicerobotik-ulm.de
//
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------
#ifndef DOMAINVISION_COMMDEPTHIMAGE_H_
#define DOMAINVISION_COMMDEPTHIMAGE_H_

#include "DomainVision/CommDepthImageCore.hh"

#include <assert.h>
#include <cstring>
#include <stdint.h>
#include "armadillo.hh"  // from utility

namespace DomainVision {
		
class CommDepthImage : public CommDepthImageCore {
	public:
		// default constructors
		CommDepthImage();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommDepthImage(const unsigned int &width, const unsigned int &height, const DomainVision::DepthFormatType &format, const unsigned int &pixel_size, const double &min_distcance, const double &max_distcance, const std::vector<unsigned char> &data, const std::vector<double> &intrinsic_m, const std::vector<double> &extrinsic_m, const std::vector<double> &stereo_m, const std::vector<double> &distortion_m, const unsigned int &seq_count, const bool &is_valid, const DomainVision::ImageDistortionModel &distortion_model = DomainVision::ImageDistortionModel());
		
		CommDepthImage(const CommDepthImageCore &commDepthImage);
		CommDepthImage(const DATATYPE &commDepthImage);
		virtual ~CommDepthImage();
		
		// use framework specific getter and setter methods from core (base) class
		using CommDepthImageCore::get;
		using CommDepthImageCore::set;
		
		//
		// feel free to add customized methods here
		//

		inline const unsigned char* get_distances() const {
					// does for our usecase only work when float's between corba and c++-floats match!
					assert(sizeof(unsigned char) == sizeof(DomainVisionIDL::CommDepthImage_data_type::value_type));
					//std::cout <<"Inside Get Distances float" <<std::endl;

					return &idl_CommDepthImage.data[0];
				}

				inline const float* get_distances_float() const {

					//take address of first element in vector
					const unsigned char* data_uchar = &idl_CommDepthImage.data[0];

					// reinterpret unsigned char* to unint16_t
					return(reinterpret_cast<const float*>(data_uchar));
				}


				inline const uint16_t* get_distances_uint16() const {

					//take address of first element in vector
					const unsigned char* data_uchar = &idl_CommDepthImage.data[0];

					// reinterpret unsigned char* to unint16_t
					return(reinterpret_cast<const uint16_t*>(data_uchar));
				}


				/**
				 * Return distance of a single pixel in the depth image. Error measures must be handled
				 * by the caller. The distance of a error pixel is 0.
				 * distances in meter.
				 *
				 * Provides quick access to one pixel of the depth image.
				 */
		//		inline float get_distance(const unsigned int posX, const unsigned int posY)
		//		{
		//			return *(get_distances() + (posY * getWidth()) + posX);
		//		}

				template <typename T>
				inline T get_distance(const unsigned int posX, const unsigned int posY)
				{
					return *(reinterpret_cast<const T*>(get_distances()) + (posY * getWidth()) + posX);
				}

				/**
				 * Set distance image.
				 * items measured in meter.
				 */
				inline void set_distances(const float* data, unsigned int width, unsigned int height)
				{
					idl_CommDepthImage.data.resize(width * height * sizeof(float));
					idl_CommDepthImage.width = width;
					idl_CommDepthImage.height = height;

					//std::cout <<"Inside Set Distances" <<std::endl;

					// does for our usecase only work when float's between corba and c++-floats match!
					//TODO
					assert(sizeof(unsigned char) == sizeof(DomainVisionIDL::CommDepthImage_data_type::value_type));
					//reinterpret uint16_t* to unsigned char *
					const unsigned char *data_uchar = reinterpret_cast< const unsigned char *>(data);
					memcpy(&idl_CommDepthImage.data[0], data, width * height * sizeof(float));
					idl_CommDepthImage.is_valid = true;
				}

				inline void set_distances_byte(const unsigned char* data, unsigned int width, unsigned int height)
				{
					idl_CommDepthImage.data.resize(width * height * 1);
					idl_CommDepthImage.width = width;
					idl_CommDepthImage.height = height;

					//std::cout <<"Inside Set Distances byte" <<std::endl;

					// does for our usecase only work when float's between corba and c++-floats match!
					assert(sizeof(unsigned char) == sizeof(DomainVisionIDL::CommDepthImage_data_type::value_type));

					memcpy(&idl_CommDepthImage.data[0], data, width * height * sizeof(float));
					idl_CommDepthImage.is_valid = true;
				}

				/**
					 * Set distance image.
					 * items measured in meter.
					 */
					inline void set_distances(const std::vector<float> &data, unsigned int width, unsigned int height) {
						idl_CommDepthImage.data.resize(width * height * sizeof(float));
						idl_CommDepthImage.width = width;
						idl_CommDepthImage.height = height;
						//std::cout <<"Inside Set Distances float" <<std::endl;


						//take address of first element in vector
						const float* data_float = &(data[0]);

						//reinterpret uint16_t* to unsigned char *
						const unsigned char *data_uchar = reinterpret_cast< const unsigned char *>(data_float);

						memcpy(&idl_CommDepthImage.data[0], data_uchar, width * height * sizeof(float));




						idl_CommDepthImage.is_valid = true;
					}

					/**
					 * Set distance image vector of uint16_t
					 *
					 */
					inline void set_distances(const std::vector<uint16_t> &data, unsigned int width, unsigned int height) {
						idl_CommDepthImage.data.resize(width * height * 1);
						idl_CommDepthImage.width = width;
						idl_CommDepthImage.height = height;

						//take address of first element in vector
						const uint16_t* data_uint16 = &(data[0]);

						//reinterpret uint16_t* to unsigned char *
						const unsigned char *data_uchar = reinterpret_cast< const unsigned char *>(data_uint16);

						memcpy(&idl_CommDepthImage.data[0], data_uchar, width * height * sizeof(uint16_t));

						idl_CommDepthImage.is_valid = true;
					}

					/**
					 * Set distance image array of uint16_t
					 *
					 */
					inline void set_distances(const uint16_t* data_uint16, unsigned int width, unsigned int height) {

						idl_CommDepthImage.data.resize(width * height * 2); // Z16 has 2 bytes
						idl_CommDepthImage.width = width;
						idl_CommDepthImage.height = height;


						//reinterpret uint16_t* to unsigned char *
						const unsigned char *data_uchar = reinterpret_cast< const unsigned char *>(data_uint16);

						memcpy(&idl_CommDepthImage.data[0], data_uchar, width * height * sizeof(uint16_t));

						idl_CommDepthImage.is_valid = true;
					}

					/**
					* Get the intrinsic matrix of the color camera.
					*/
					inline const arma::mat get_intrinsic()
					{

						arma::mat m(4, 4);
						for (size_t i = 0; i < 4; ++i)
						{
							for (size_t j = 0; j < 4; j++)
							{
								m(i, j) = idl_CommDepthImage.intrinsic_m[i*4 + j]; // _m is 1-dimension!
							}
						}

						return m;
					}

					/**
							 * set the intrinsic matrix of the color camera.
							 *     |	fx	 0	  cx	0	|
							 * M = |	0	 fy	  cy	0	|
							 * 	   |	0	 0	  1		0 	|
							 * 	   |	0	 0	  0		1 	|
							 */
							inline void set_intrinsic(const arma::mat& mat)
							{

								if (mat.n_cols != 4 && mat.n_rows != 4)
								{
									return;
								}

								arma::mat m(4, 4);
								for (size_t i = 0; i < 4; ++i)
								{
									for (size_t j = 0; j < 4; j++)
									{
										idl_CommDepthImage.intrinsic_m[i*4 + j] = mat(i, j);
									}
								}
							}

							/**
							 * Get the distortion matrix of the color camera.
							 */
							inline const arma::mat get_distortion()
							{

								arma::mat m(1, 5);
								for (size_t i = 0; i < 5; ++i)
								{
									m(0, i) = idl_CommDepthImage.distortion_m[i];

								}

								return m;
							}

							/**
							 * set the distortion coefficients of the color camera.
							 */
							inline void set_distortion(const arma::mat& mat)
							{
								if (mat.n_cols != 5 && mat.n_rows != 1)
								{
									return;
								}
								for (size_t i = 0; i < 5; ++i)
								{
									idl_CommDepthImage.distortion_m[i] = mat(0, i);

								}
							}


							/**
							 * Get the extrinsic matrix of the color camera.
							 */
							inline const arma::mat get_extrinsic()
							{

								arma::mat m(1, 12);
								for (size_t i = 0; i < 12; ++i)
								{

										m(0, i) = idl_CommDepthImage.extrinsic_m[i]; // _m is 1-dimension!

								}

								return m;
							}

							/**
							 * set the extrinsic matrix of the color camera.
							 */
							inline void set_extrinsic(const arma::mat& mat)
							{

								if (mat.n_cols != 12 && mat.n_rows != 1)
								{
									return;
								}

								arma::mat m(1, 12);
								for (size_t i = 0; i < 12; ++i)
								{

									idl_CommDepthImage.extrinsic_m[i] = mat(0, i);

								}
							}

};

inline std::ostream &operator<<(std::ostream &os, const CommDepthImage &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace DomainVision */
#endif /* DOMAINVISION_COMMDEPTHIMAGE_H_ */
