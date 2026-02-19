import pandas as pd

def detect_anomaly(df):
    df['rolling_mean'] = df['FSI'].rolling(window=5).mean()
    df['anomaly'] = abs(df['FSI'] - df['rolling_mean']) > 1.5
    return df
