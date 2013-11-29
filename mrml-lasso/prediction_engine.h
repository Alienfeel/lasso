

//
// This file defines the logistic regression inference engine.

#ifndef MRML_LASSO_PREDICTION_ENGINE_H_
#define MRML_LASSO_PREDICTION_ENGINE_H_

#include <map>
#include <vector>
#include <string>

namespace logistic_regression {

class PredictionEngine {
 public:
  explicit PredictionEngine(const std::string& model_file_name);
  ~PredictionEngine();

  /*
   * ��������: Predict
   * ��������: ����һ���������߼��ع�ֵ
   * ��������: vector<int>& feature_names ��������
   *           vector<double>& feature_values ����ֵ
   *           double& ret �������߼��ع�ֵ
   * �������: -1, ʧ��
   *            0, �ɹ�
   */
  int Predict(const std::vector<int>& feature_names,
              const std::vector<double>& feature_values,
              double& ret);
 private:
  std::map<int, double> feature_weights_;
};

}  // namespace logistic_regression

#endif  // MRML_LASSO_PREDICTION_ENGINE_H_
