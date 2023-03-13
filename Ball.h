#pragma once
class Ball {
public:
    Ball()=default;
    Ball(int ballNoParam, bool extractedParam);
    void setBallNo(int ballNoParam);
    void setExtractedParam(bool extractedParam);
    int getBallNo();
    int getExtracted();
private:
    int ballNo;
    bool extracted;
};
