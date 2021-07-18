import tensorflow as tf
import numpy as np

def calculate_model_size(model):
  print(model.summary())
  var_sizes = [
      np.product(list(map(int, v.shape))) * v.dtype.size
      for v in model.trainable_variables
  ]
  print("Model size:", sum(var_sizes) / 1024, "KB")

model = tf.keras.Sequential([
    tf.keras.layers.Conv2D(
        4, (4, 3),
        padding="same",
        activation="relu",
        input_shape=(315, 3, 1)),  # output_shape=(batch, 128, 3, 8)
    tf.keras.layers.MaxPool2D((3, 3)),  # (batch, 42, 1, 8)
    # tf.keras.layers.Dropout(0.1),  # (batch, 42, 1, 8)
    tf.keras.layers.Conv2D(8, (4, 1), padding="same",
                           activation="relu"),  # (batch, 42, 1, 16)
    tf.keras.layers.MaxPool2D((3, 1), padding="same"),  # (batch, 14, 1, 16)
    # tf.keras.layers.Dropout(0.1),  # (batch, 14, 1, 16)
    tf.keras.layers.Flatten(),  # (batch, 224)
    tf.keras.layers.Dense(70, activation="relu"),  # (batch, 16)
    # tf.keras.layers.Dropout(0.1),  # (batch, 16)
    tf.keras.layers.Dense(35, activation="softmax")  # (batch, 4)
])

model1 = tf.keras.Sequential([
    tf.keras.layers.Conv2D(
        4, (4, 3),
        padding="same",
        activation="relu",
        input_shape=(140, 3, 1)),  # output_shape=(batch, 128, 3, 8)
    tf.keras.layers.MaxPool2D((2, 3)),  # (batch, 42, 1, 8)
    tf.keras.layers.Dropout(0.1),  # (batch, 42, 1, 8)
    tf.keras.layers.Conv2D(8, (4, 1), padding="same",
                           activation="relu"),  # (batch, 42, 1, 16)
    tf.keras.layers.MaxPool2D((2, 1), padding="same"),  # (batch, 14, 1, 16)
    tf.keras.layers.Dropout(0.1),  # (batch, 14, 1, 16)
    tf.keras.layers.Flatten(),  # (batch, 224)
    tf.keras.layers.Dense(140, activation="relu"),  # (batch, 16)
    tf.keras.layers.Dropout(0.1),  # (batch, 16)
    tf.keras.layers.Dense(35, activation="softmax")  # (batch, 4)
])

print(calculate_model_size(model1))