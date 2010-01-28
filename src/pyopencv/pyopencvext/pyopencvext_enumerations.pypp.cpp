// This file has been generated by Py++.

#include "boost/python.hpp"
#include "opencv_headers.hpp"
#include "pyopencvext_enumerations.pypp.hpp"

namespace bp = boost::python;

void register_enumerations(){

    bp::enum_< CV_FACE_ELEMENTS>("CV_FACE_ELEMENTS")
        .value("CV_FACE_MOUTH", CV_FACE_MOUTH)
        .value("CV_FACE_LEFT_EYE", CV_FACE_LEFT_EYE)
        .value("CV_FACE_RIGHT_EYE", CV_FACE_RIGHT_EYE)
        .export_values()
        ;

    bp::enum_< CvCalibEtalonType>("CvCalibEtalonType")
        .value("CV_CALIB_ETALON_USER", CV_CALIB_ETALON_USER)
        .value("CV_CALIB_ETALON_CHESSBOARD", CV_CALIB_ETALON_CHESSBOARD)
        .value("CV_CALIB_ETALON_CHECKERBOARD", CV_CALIB_ETALON_CHECKERBOARD)
        .export_values()
        ;

    bp::enum_< CvFilter>("CvFilter")
        .value("CV_GAUSSIAN_5x5", CV_GAUSSIAN_5x5)
        .export_values()
        ;

    bp::enum_< CvGraphWeightType>("CvGraphWeightType")
        .value("CV_NOT_WEIGHTED", CV_NOT_WEIGHTED)
        .value("CV_WEIGHTED_VTX", CV_WEIGHTED_VTX)
        .value("CV_WEIGHTED_EDGE", CV_WEIGHTED_EDGE)
        .value("CV_WEIGHTED_ALL", CV_WEIGHTED_ALL)
        .export_values()
        ;

    bp::enum_< CvLeeParameters>("CvLeeParameters")
        .value("CV_LEE_INT", CV_LEE_INT)
        .value("CV_LEE_FLOAT", CV_LEE_FLOAT)
        .value("CV_LEE_DOUBLE", CV_LEE_DOUBLE)
        .value("CV_LEE_AUTO", CV_LEE_AUTO)
        .value("CV_LEE_ERODE", CV_LEE_ERODE)
        .value("CV_LEE_ZOOM", CV_LEE_ZOOM)
        .value("CV_LEE_NON", CV_LEE_NON)
        .export_values()
        ;

    bp::enum_< CvNextEdgeType>("CvNextEdgeType")
        .value("CV_NEXT_AROUND_ORG", CV_NEXT_AROUND_ORG)
        .value("CV_NEXT_AROUND_DST", CV_NEXT_AROUND_DST)
        .value("CV_PREV_AROUND_ORG", CV_PREV_AROUND_ORG)
        .value("CV_PREV_AROUND_DST", CV_PREV_AROUND_DST)
        .value("CV_NEXT_AROUND_LEFT", CV_NEXT_AROUND_LEFT)
        .value("CV_NEXT_AROUND_RIGHT", CV_NEXT_AROUND_RIGHT)
        .value("CV_PREV_AROUND_LEFT", CV_PREV_AROUND_LEFT)
        .value("CV_PREV_AROUND_RIGHT", CV_PREV_AROUND_RIGHT)
        .export_values()
        ;

    bp::enum_< CvStatus>("CvStatus")
        .value("CV_BADMEMBLOCK_ERR", CV_BADMEMBLOCK_ERR)
        .value("CV_INPLACE_NOT_SUPPORTED_ERR", CV_INPLACE_NOT_SUPPORTED_ERR)
        .value("CV_UNMATCHED_ROI_ERR", CV_UNMATCHED_ROI_ERR)
        .value("CV_NOTFOUND_ERR", CV_NOTFOUND_ERR)
        .value("CV_BADCONVERGENCE_ERR", CV_BADCONVERGENCE_ERR)
        .value("CV_BADDEPTH_ERR", CV_BADDEPTH_ERR)
        .value("CV_BADROI_ERR", CV_BADROI_ERR)
        .value("CV_BADHEADER_ERR", CV_BADHEADER_ERR)
        .value("CV_UNMATCHED_FORMATS_ERR", CV_UNMATCHED_FORMATS_ERR)
        .value("CV_UNSUPPORTED_COI_ERR", CV_UNSUPPORTED_COI_ERR)
        .value("CV_UNSUPPORTED_CHANNELS_ERR", CV_UNSUPPORTED_CHANNELS_ERR)
        .value("CV_UNSUPPORTED_DEPTH_ERR", CV_UNSUPPORTED_DEPTH_ERR)
        .value("CV_UNSUPPORTED_FORMAT_ERR", CV_UNSUPPORTED_FORMAT_ERR)
        .value("CV_BADARG_ERR", CV_BADARG_ERR)
        .value("CV_NOTDEFINED_ERR", CV_NOTDEFINED_ERR)
        .value("CV_BADCHANNELS_ERR", CV_BADCHANNELS_ERR)
        .value("CV_BADRANGE_ERR", CV_BADRANGE_ERR)
        .value("CV_BADSTEP_ERR", CV_BADSTEP_ERR)
        .value("CV_BADFLAG_ERR", CV_BADFLAG_ERR)
        .value("CV_DIV_BY_ZERO_ERR", CV_DIV_BY_ZERO_ERR)
        .value("CV_BADCOEF_ERR", CV_BADCOEF_ERR)
        .value("CV_BADFACTOR_ERR", CV_BADFACTOR_ERR)
        .value("CV_BADPOINT_ERR", CV_BADPOINT_ERR)
        .value("CV_BADSCALE_ERR", CV_BADSCALE_ERR)
        .value("CV_OUTOFMEM_ERR", CV_OUTOFMEM_ERR)
        .value("CV_NULLPTR_ERR", CV_NULLPTR_ERR)
        .value("CV_BADSIZE_ERR", CV_BADSIZE_ERR)
        .value("CV_NO_ERR", CV_NO_ERR)
        .value("CV_OK", CV_OK)
        .export_values()
        ;

    bp::enum_< CvSubdiv2DPointLocation>("CvSubdiv2DPointLocation")
        .value("CV_PTLOC_ERROR", CV_PTLOC_ERROR)
        .value("CV_PTLOC_OUTSIDE_RECT", CV_PTLOC_OUTSIDE_RECT)
        .value("CV_PTLOC_INSIDE", CV_PTLOC_INSIDE)
        .value("CV_PTLOC_VERTEX", CV_PTLOC_VERTEX)
        .value("CV_PTLOC_ON_EDGE", CV_PTLOC_ON_EDGE)
        .export_values()
        ;

    bp::enum_< cv::flann::flann_algorithm_t>("flann_algorithm_t")
        .value("LINEAR", cv::flann::LINEAR)
        .value("KDTREE", cv::flann::KDTREE)
        .value("KMEANS", cv::flann::KMEANS)
        .value("COMPOSITE", cv::flann::COMPOSITE)
        .value("SAVED", cv::flann::SAVED)
        .value("AUTOTUNED", cv::flann::AUTOTUNED)
        .export_values()
        ;

    bp::enum_< cv::flann::flann_centers_init_t>("flann_centers_init_t")
        .value("CENTERS_RANDOM", cv::flann::CENTERS_RANDOM)
        .value("CENTERS_GONZALES", cv::flann::CENTERS_GONZALES)
        .value("CENTERS_KMEANSPP", cv::flann::CENTERS_KMEANSPP)
        .export_values()
        ;

    bp::enum_< cv::flann::flann_distance_t>("flann_distance_t")
        .value("EUCLIDEAN", cv::flann::EUCLIDEAN)
        .value("MANHATTAN", cv::flann::MANHATTAN)
        .value("MINKOWSKI", cv::flann::MINKOWSKI)
        .export_values()
        ;

    bp::enum_< cv::flann::flann_log_level_t>("flann_log_level_t")
        .value("LOG_NONE", cv::flann::LOG_NONE)
        .value("LOG_FATAL", cv::flann::LOG_FATAL)
        .value("LOG_ERROR", cv::flann::LOG_ERROR)
        .value("LOG_WARN", cv::flann::LOG_WARN)
        .value("LOG_INFO", cv::flann::LOG_INFO)
        .export_values()
        ;

}
